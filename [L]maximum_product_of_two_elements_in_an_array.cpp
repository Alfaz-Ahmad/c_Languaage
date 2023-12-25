int maxProduct(int* nums, int numsSize) {
    int i, j, max = 0, mux;
    for(i=0;i<numsSize;i++){
        for(j=i+1;j<numsSize;j++){
            mux = (*(nums+i)-1)*(*(nums+j)-1);
            if(mux > max){
                max = mux;
            }
        }
    }
    return max;
}