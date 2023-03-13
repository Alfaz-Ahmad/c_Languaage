#include<stdio.h>
int main() {
    int a[100][100], b[100][100], c[100][100], r1, r2, c1, c2, m, i, j, k;

    //printf("Enter the value of N (N <= 10): ");
    scanf("%d %d", &r1, &c1);
    scanf("%d %d", &r2, &c2);
    if((c1 == r2) || (c2 == r1)){
    //printf("Enter the elements of Matrix-A: \n");
    
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", & a[i][j]);
        }
    }

    //printf("Enter the elements of Matrix-B: \n");

    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", & b[i][j]);
        }
    }
    if(c1==r2){
    for (i = 0; i < c1; i++) {
        for (j = 0; j < r2; j++) {
            c[i][j] = 0;
            for (k = 0; k < c2*r1; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
	for (i = 0; i < c2; i++) {
        for (j = 0; j < r1; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }   

    }else{
        for (i = 0; i < c2; i++) {
            for (j = 0; j < r1; j++) {
                c[i][j] = 0;
                for (k = 0; k < c1*r2; k++) {
                    c[i][j] += a[i][k] * b[k][j];
                }
            }
        }
        for (i = 0; i < c1; i++) {
        	for (j = 0; j < r2; j++) {
            	printf("%d ", c[i][j]);
        	}
        	printf("\n");
    	}   
    }
    //printf("The product of the two matrices is: \n");

    }else{
        printf("Matrix multiplication is not possible");
    }
    return 0;
}
