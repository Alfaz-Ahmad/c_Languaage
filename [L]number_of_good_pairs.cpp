int numIdenticalPairs(int* nums, int numsSize){
    int i, c = 0, max = 0;
    for(i=0;i<numsSize;i++){
        if(*(nums+i) > max){
            max = *(nums+i);
        }
    }
    int* hash = (int*)calloc(max+1,sizeof(int));
    for(i=0;i<numsSize;i++){
        (*(hash+(*(nums+i))))++;
    }
    for(i=0;i<max+1;i++){
        if(*(hash+i) > 1){
            c += (*(hash+i) * (*(hash+i)-1))/2;
        }
    }
    return c;
}