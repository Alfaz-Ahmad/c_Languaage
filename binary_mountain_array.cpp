# include<stdio.h>

int found( int arr[], int l, int h){
	int m = l+(h-l)/2;
	if((arr[m-1]<arr[m])&&(arr[m]>arr[m+1])){
		return m;
	}else if(arr[m] < arr[m+1]){
		return found(arr, m+1, l);
	}else{
		return found(arr,l, m-1);
	}
}

int main(){
	int n, r;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	printf("Enter the elements of array: ");
	int i, arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	r = found(arr,0,n);
	printf("%d",r);
}
