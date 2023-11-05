int minIncrementForUnique(int* nums, int numsSize){
    int i, max=0, c =0;
    for(i=0;i<numsSize;i++){
        if(max<*(nums+i)){
            max = *(nums+i);
        }
    }
    int* hash = (int*)calloc(max+1,sizeof(int));
    for(i=0;i<numsSize;i++){
        (*(hash+(*(nums+i))))++;
    }
    for(i=0;i<max+1;i++){
        if(i!= max && *(hash+i)>1){
            c += *(hash+i)-1;
            *(hash+i+1) += *(hash+i)-1;
        }else if(i == max && *(hash+i)>1){
            c+= (*(hash+i)*(*(hash+i)-1)/2);
        }
    }
    return c;
}