void moveZeroes(int* nums, int numsSize){
    int* r = (int*)calloc(numsSize,sizeof(int));
    int i, j = 0;
    for(i=0;i<numsSize;i++){
        if(*(nums+i)!=0){
            *(r+j++) = *(nums+i);
        }
    }
    for(i=0;i<numsSize;i++){
        *(nums+i) = *(r+i);
    }
}