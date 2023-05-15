# include<stdio.h>
# include<stdlib.h>

int main(){
	int i, j, n, k, temp;
	scanf("%d %d",&n,&k);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<k;i++){
		temp = arr[n-1];
		for(j=n-1;j>=1;j--){
			arr[j] = arr[j-1];
		}
		arr[0] = temp;
	}
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
