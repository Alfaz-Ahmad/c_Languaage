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

void max_min(unsigned long long int* arr){
    int i, j;
    unsigned long long int sum, max, min;
    unsigned long long int r[5];
    for(i=0;i<5;i++){
        sum = 0;
        for(j=0;j<5;j++){
            if(j != i){
                sum += *(arr+j);
            }if(j == 4){
                r[i] = sum;
            }
        }
    }
    max = r[0];
    min = r[0];
    for(i=0;i<5;i++){
        if(max < r[i]){
            max = r[i];
        }else if(min > r[i]){
            min = r[i];
        }
    }
    printf("%llu %llu",min, max);   
}

int main(){
    int i;
    unsigned long long int arr[5];
    for(i=0;i<5;i++){
        scanf("%llu",&arr[i]);
    }
    max_min(arr);
    return 0;
}
