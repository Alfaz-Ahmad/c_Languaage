#include <math.h>
#include <stdio.h>
 

void insertionSort(int arr[], int n)
{

}
 
void printArray(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{	
	int n, i, l, j, key;
	printf("Enter size of array: ");
	scanf("%d", &n);
    int arr[n];
	printf("Enter the Elements of array: \n");
	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
    l = sizeof(arr) / sizeof(arr[0]);
    for (i = 1; i < l; i++) {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    printArray(arr, l);
    return 0;
}
