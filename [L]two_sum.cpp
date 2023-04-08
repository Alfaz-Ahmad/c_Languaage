#include<stdio.h>
#include<stdlib.h>


int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int i, j;
    *returnSize = 2;
    int* returnArray = (int*)calloc(2, sizeof(int));
    for (i = 0; i < numsSize; i++) {
        for (j = i + 1; j < numsSize; j++) {
            if (*(nums + i) + *(nums + j) == target) {
                returnArray[0] = i;
                returnArray[1] = j;
                return returnArray;
            }
        }
    }
    returnArray[0] = -1;
    returnArray[1] = -1;
    return returnSize;
}

void main() {
    int i, n,t, rs=0;
    int* re;
    int* s = &rs;
    scanf_s("%d", &n);
    int* arr = (int*)calloc(n, sizeof(int));
    for (i = 0; i < n; i++) {
        scanf_s("%d", (arr+i));
    }
    scanf_s("%d", &t);
    re = twoSum(arr, n, t, s);
    for (i = 0; i < *s; i++) {
        printf("%d ", *(re + i));
    }
}