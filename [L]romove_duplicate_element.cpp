#include<stdio.h>
#include<stdlib.h>


int removeDuplicates(int* nums, int numsSize) {
    if (numsSize != 1) {
        int i, k = 1, re = *(nums);
        for (i = 0; i < numsSize - 1; i++) {
            if (*(nums + i) != *(nums + i + 1) && *(nums + i) == re) {
                *(nums + k) = *(nums + i + 1);
                re = *(nums + i + 1);
                k++;
            }if (i == numsSize - 2) {
                if (*(nums + i) != *(nums + i + 1) && *(nums + i) == re) {
                    *(nums + k++) = *(nums + i + 1);
                    k++;
                }
            }
        }
        return k;
    }
    return numsSize;
}

int main() {
    int n, i, k;
    scanf_s("%d", &n);
    int* nums = (int*)malloc(n*sizeof(int));
    for (i = 0; i < n; i++) {
        scanf_s("%d", (nums + i));
    }
    k = removeDuplicates(nums, n);
    printf("[ ");
    for (i = 0; i < k; i++) {
        printf("%d ", *(nums + i));
    }
    printf("]");
}

