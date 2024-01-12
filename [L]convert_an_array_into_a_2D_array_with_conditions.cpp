/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** findMatrix(int* nums, int numsSize, int* returnSize, int** returnColumnSizes){
    int i, j, k, max = 0;
    int* freq = (int*)calloc(numsSize+1, sizeof(int));
    for(i=0;i<numsSize;i++){
        (*(freq+(*(nums+i))))++;
        if(max < *(freq+(*(nums+i)))){
            max = *(freq+(*(nums+i)));
        }
    }
    int** rtn_arr = (int**)malloc(max*sizeof(int*));
    *returnColumnSizes = (int*)malloc(max*sizeof(int));
    i = 0;
    while(i<max){
        rtn_arr[i] = (int*)malloc(numsSize*sizeof(int));
        j = 0;
        for(k=0;k<=numsSize;k++){
            if(*(freq+k) != 0){
                *(*(rtn_arr+i)+j++) = k;
                (*(freq+k))--;
            }
        }
        *(*(returnColumnSizes)+i) = j;
        i++;
    }
    *(returnSize) = max;
    return rtn_arr;
}