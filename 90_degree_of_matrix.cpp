
#include <stdio.h>

int main()
{
    int m,n,i,j;
    printf("Enter the order of matrix(nxn)): ");
    scanf("%d %d",&n, &n);
    int res[n][n], B[n][n];
    printf("Enter the elements of array: \n");
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            scanf("%d",&res[i][j]);
        }
    }
    
    for (i = 0; i < n; i++){
        for (j = n-1; j >= 0; j--){
            //B[i][j] = res[j][i];
            printf("%d ", res[j][i]);
    	}
    	printf("\n");
 	}
    /*printf("Result matrix is \n");
    for (i = 0; i < n; i++){
        for (j = 0; j < n; j++){
            printf("%d ", B[i][j]);
        }     
        printf("\n");
    }*/
 
    return 0;
}
