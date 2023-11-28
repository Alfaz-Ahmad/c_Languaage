void moveZeroes(int* nums, int numsSize){
    int* r = (int*)calloc(numsSize,sizeof(int));
    int i, j = 0;
    for(i=0;i<numsSize;i++){
        if(*(nums+i) != 0){
            *(nums+j++) = *(nums+i); 
        }else{
            while(i<numsSize && *(nums+i)==0){
                i++;
            }
            if(i != numsSize){
                *(nums+j++) = *(nums+i);
            }
        }
    }
    for(j;j<numsSize;j++){
        *(nums+j) = 0;
    }
}