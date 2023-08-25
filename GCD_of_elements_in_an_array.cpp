#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 int gcd(int a, int b){
    int r = a;
    if(a > b){
    	r = b;
	}
    while (r > 0) {
        if (a % r == 0 && b % r == 0) {
            break;
        }
        r--;
    }
    return r;
}

int main(){
	int i, n;
	scanf("%d",&n);
	int* a = (int*)malloc(n*sizeof(int));
	int* r = (int*)malloc(n-1*sizeof(int));
	for(i=0;i<n;i++){
		scanf("%d", (a+i));
	}
	for(i=0;i<n-1;i++){
		*(r+i) = gcd(*(a+i), *(a+i+1));
		printf("%d ",*(r+i));
	}
	return 0;
}
