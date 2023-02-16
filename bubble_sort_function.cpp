# include<stdio.h>

int sort(int a[], int l){
	int i, j, c=0, d, t;
	for(i=0;i<l;i++){
		d = c;
		for(j=0;j<l;j++){
			if(a[j+1] < a[j]){
				t = a[j+1];
				a[j+1] = a[j];
				a[j] = t;
				c++;
			}
		}
		if (c == d){
			break;
		}
	}
}

int main(){
	int n, i;
	printf("Enter the length of array: ");
	scanf("%d", &n);
	int arr[n];
	printf("\nEnter the elements of array: \n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	sort(arr,n);
	printf("\nSorted Array: \n");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
}
