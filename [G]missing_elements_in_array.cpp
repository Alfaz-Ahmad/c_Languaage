#include <stdio.h>

int MissingNumber(int array[], int n) {
    int i, j, k=0;
    for(i=1;i<=n;i++){
    	k = 0;
        for(j=0;j<n-1;j++){
        	//printf(">>>%d\t%d\n",array[j], i);
            if(array[j] == i){
                k++;
            }
        }
        if(k == 0){
            return i;
        }
        //printf("%d\n\n", k);
    }
}

int main() {
	int t;
	printf("Enter total No. of cases: ");
	scanf("%d", &t);
    while (t--) {
        int n, r, i;
        printf("Enter the size of array: ");
        scanf("%d", &n);
        int array[n];
        printf("Enter the elements(%d natural number) of array(<=%d): \n", n-1, n);
        for(i=0;i<n-1;i++){
        	scanf("%d",&array[i]);
		}
       r = MissingNumber(array, n);
       printf("Missing Element: ");
       printf("%d\n", r);
    }
    return 0;
}

