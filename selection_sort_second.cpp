#include <stdio.h>

int main(){
	int arr[100], n, i, d, in, t;
	printf("Enter number of elements: ");
	scanf("%d", &n);
	printf("Enter the elements: \n", n);
	for (i = 0; i < n; i++){
		scanf("%d", &arr[i]);
	}
	for (i = 0; i < (n - 1); i++){
		in = i;
		for (d = i + 1; d < n; d++){
			if (arr[in] > arr[d]){
				in = d;
			}
		}
		if (in != i){
	  		t = arr[i];
	  		arr[i] = arr[in];
	  		arr[in] = t;
		}
	}	
	printf("Sorted array:\n");	
	for (i = 0; i < n; i++){
		printf("%d ", arr[i]);	
	}
	return 0;
}
