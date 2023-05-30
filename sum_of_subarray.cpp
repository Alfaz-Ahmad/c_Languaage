# include<stdio.h>

int main(){
	int n, i, j, k, max=0, sum;
	scanf("%d",&n);
	int arr[n];
	scanf("%d",&k);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n-(k);i++){
		sum = 0;
		for(j=0;j<k+2;j++){
			sum += arr[i+j];
		}
		//printf("%d\n",sum);
		if(sum > max){
			max = sum;
		}
	}
	printf("%d",max);
	return 0;
}
