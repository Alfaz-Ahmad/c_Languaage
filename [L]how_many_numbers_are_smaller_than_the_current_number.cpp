/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize){
    int i, j, c;
    int* r = (int*)malloc(numsSize*sizeof(int));
    for(i=0;i<numsSize;i++){
        c = 0;
        for(j=0;j<numsSize;j++){
            if(i!=j && *(nums+i)>*(nums+j)){
                c++;
            }
        }
        *(r+i) = c;
    }
    *(returnSize) = numsSize;
    return r;
}