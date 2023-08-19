#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include<stdio.h>
#include<stdlib.h>

int main(){
    int n, i, j, k;
    scanf("%d",&n);
    int *a = (int*)malloc(sizeof(int)*n+1);
    for(i = 1; i < n+1; i++){
        scanf("%d",&a[i]);
    }
    for(i = 1; i < n+1; i++){
        for(int j = 1; j < n+1; j++){
            if(i == a[j]){
                for(k = 1; k < n+1; k++){
                    if(j == a[k]){
                        printf("%d\n",k);
                    }
                }
            }
        }
    }
    return 0;
}

