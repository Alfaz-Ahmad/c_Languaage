int findDuplicate(int* nums, int numsSize){
    int i;
    int* hash = (int*)calloc(numsSize,sizeof(int));
    for(i=0;i<numsSize;i++){
        if(*(hash+(*(nums+i)))==1){
            return *(nums+i);
        }
        (*(hash+(*(nums+i))))++;
    }
    return 0;
}