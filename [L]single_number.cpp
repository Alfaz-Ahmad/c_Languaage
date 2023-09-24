int singleNumber(int* nums, int numsSize){
    int i, x = 0;
    for(i=0;i<numsSize;i++){
        x = x^(*(nums+i));
    }
    return x;
}