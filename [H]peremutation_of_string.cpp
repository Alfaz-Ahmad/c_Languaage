#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int next_permutation(int n, char **s){
    int i=n-1,j,k=0;
    char t[11];
    char *temp;
    static int r = 0;
    temp = *(s+i);
	for(i;i>0;i--){
		*(s+i) = *(s+i-1);
	}
	for(i=1;i<=n;i++){
        k = k*i;
    }
	*(s) = temp;
	r++;
	if(r==k){
		return 0;
	}else{
		return 1;
	}
}


