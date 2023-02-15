# include<stdio.h>

int sort(int a[], int l){
	int j, k, t, i, min;
	for(j=0;j<l;j++){
		min = a[j];
		i = j;
		for(k=i+1;k<l;k++){
			if(a[k]<min){
				min = a[k];
				i = k;
			}
		}
		if(j!=i){
			t = a[j];
			a[j] = a[i];
			a[i] = t;
		}
	}
}

int main(){
	int n, i;
	printf("Enter the length of array: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the elements of array: \n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	sort(arr, n);
	printf("\nSorted Array: \n");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;}
