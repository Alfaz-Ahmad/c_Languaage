int minStartValue(int* nums, int numsSize){
    int i, min = 0, sum = 0;
    for(i=0;i<numsSize;i++){
        sum += *(nums+i);
        if(sum < min){
            min = sum;
        }
    }
    return 1-min;
}