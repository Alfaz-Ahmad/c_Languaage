int* runningSum(int* nums, int numsSize, int* returnSize){
    long i, sum = 0;
    int* r = (int*)malloc(numsSize*sizeof(int));
    for(i=0;i<numsSize;i++){
        sum += *(nums+i);
        *(r+i) = sum;
    }
    *(returnSize) = numsSize;
    return r;
}