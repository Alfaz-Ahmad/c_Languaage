# include<stdio.h>

int main(){
	int n,num,i;
	printf("Enter the length of array: ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<=n-1;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the deletion element: ");
	scanf("%d",num);
	
	int arr2[n-1];
	for(i=0;i<=n-2;i++){
		if(i >= num-1){
			arr[i-1] = arr[i];
		}
	}
	for(i=0;i<=n-2;i++){
		printf("%d ",arr2[i]);
	}
}
