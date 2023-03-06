# include<stdio.h>

int main(){
	int i, n, j, k;
	scanf("%d", &n);
	for(i=n;i>=1;i--){
		for(j=n; j>=i; j--){
			printf("%d ",j);
		}
		for(j=n; j>n-i+1; j--){
			printf("%d ",i);
		}
		for(j=n; j>n-i+1; j--){
			printf("%d ", i);
		}
		for(j=n; i<j; j--){
			printf("%d ", n-(j-i-1));
		}
		printf("\n");
	}
	for(i=n; i>=1; i--){
		for(j=n; j>n-i+1; j--){
			printf("%d ", j);
		}
		for(j=n; j>=i; j--){
			if(n-i+2 <= n){
				printf("%d ", n-i+2);
			}
		}
		for(j=n-1; j>=i-1; j--){
			if(n-i+2 <= n){
				printf("%d ", n-i+2);
			}
		}
		for(j=1; j<=i-2; j++){
			if(j+2+n-i <= n){
				printf("%d ",j+2+n-i);
			}
		}
		printf("\n");
	}
}
