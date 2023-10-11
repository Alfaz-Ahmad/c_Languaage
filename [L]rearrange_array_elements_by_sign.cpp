int* rearrangeArray(int* nums, int numsSize, int* returnSize){
    int i=0, p_counter=0, n_counter = 0;
    int* r = (int*)malloc(numsSize*sizeof(int));
    while(i < numsSize){
        if(i%2 == 0){
            if(*(nums+p_counter)>0){
                *(r+i++) = *(nums+p_counter);
            }
            p_counter++;
        }else{
            if(*(nums+n_counter)<0){
                *(r+i++) = *(nums+n_counter);
            }
            n_counter++;
        }
    }
    *(returnSize) = numsSize;
    return r;
}