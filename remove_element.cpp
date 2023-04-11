#include<stdio.h>
#include<stdlib.h>

int removeElement(int* nums, int numsSize, int val) {
    int i, j;
    if (numsSize == 1 && *(nums) == val) {
        return 0;
    }if (numsSize > 1) {
        for (i = 0; i < numsSize; i++) {
            if (*(nums + i) == val) {
                for (j = i; j < numsSize - 1; j++) {
                    *(nums + j) = *(nums + j + 1);
                }
                numsSize--;
                i--;
            }
        }
        return numsSize;
    }
    return numsSize;
}

int mian() {
    int t, n,i;
    scanf_s("%d", &n);
    int* arr = (int*)malloc(n*sizeof(int));
    scanf_s("%d", &t);
    n = removeElement(arr, n, t);
    for (i = 0; i < n; i++) {
        printf("%d", *(arr + i));
    }
    return 0;
}