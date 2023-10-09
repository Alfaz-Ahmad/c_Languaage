int* sortArrayByParity(int* nums, int numsSize, int* returnSize){
    if(numsSize == 1){
        *(returnSize) = numsSize;
        return nums;
    }else{
        int i, j = 0, k=numsSize-1;
        int* r = (int*)malloc(numsSize*sizeof(int));
        for(i=0;i<numsSize;i++){
            if(*(nums+i)%2==0){
                *(r+j++) = *(nums+i);
            }else{
                *(r+k--) = *(nums+i);
            }
        }
        *(returnSize) = numsSize;
        return r;
    }
    assert(false);
}