# include<stdio.h>

int main(){
	int m,n,i,j;
	printf("Enter the order of matrix(mxn)): ");
	scanf("%d %d",&m,&n);
	int res[n][m];
	printf("Enter the elements of array: \n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&res[j][i]);
		}
	}
	printf("\nTranspose of Matrix: \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ",res[i][j]);
		}
		printf("\n");
	}
}
