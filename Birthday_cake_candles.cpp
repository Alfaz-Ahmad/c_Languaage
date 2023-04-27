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

int max(int* arr, int v){
    int i, max = *(arr), count=0;
    for(i=0;i<v;i++){
        if(max < *(arr+i)){
            max = *(arr+i);
        }
    }
    for(i=0;i<v;i++){
        if(*(arr+i) == max){
            count++;
        }
    }
    return count;
}

int main(){
    int n, i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",max(arr, n));
    return 0;
}

