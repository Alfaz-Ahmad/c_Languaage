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

int main(){
    long r , c;
    scanf("%lu %lu",&r,&c);
    long co = 2*(c-1);
    long v = (long)r/2;
    if(r % 2 == 1){
        printf("%lu",(v*10)+(long)co);
        return 0;
    }
    printf("%lu",(long)10*((r/2)-1) + co + 1);
    return 0;
}

