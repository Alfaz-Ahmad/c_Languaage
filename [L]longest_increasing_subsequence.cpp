int lengthOfLIS(int* nums, int numsSize) {
    int i, j, max = 1;
    int* last_max = (int*)malloc(numsSize*sizeof(int));
    *(last_max + numsSize-1) = 1;
    for(i=numsSize-2;i>=0;i--){
        *(last_max+i) = 1;
        for(j=i+1;j<numsSize;j++){
            if(*(nums+i) < *(nums+j) && 1+*(last_max + j) > *(last_max+i)){
                *(last_max + i) = 1 + *(last_max + j);
                if(max < *(last_max + i)){
                    max = *(last_max + i);
                }
            }
        }
    }
    return max;
}