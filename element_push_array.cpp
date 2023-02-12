# include<stdio.h>

int main(){
	int n, i, v, s;
	printf("Enter the length of array: ");
	scanf("%d",&n);
	int arr[n+1];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("Enter the element and index: ");
	scanf("%d %d",&v, &s);
	
	for(i=n+1; i>=s; i--){
		if(i == s){
			arr[i+1] = arr[i];
			arr[i] = v;	
		}else{
			arr[i+1] = arr[i];
		}
	}
	for(i=0;i<=n;i++){
		printf("%d ",arr[i]);
	}
}
