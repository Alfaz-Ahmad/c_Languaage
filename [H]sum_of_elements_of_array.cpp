# include<stdio.h>

int main(){
	int n, i, sum=0, arr[1000];
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	for(i=0; i<n; i++){
		sum += arr[i];
	}
	printf("%d", sum);
}

