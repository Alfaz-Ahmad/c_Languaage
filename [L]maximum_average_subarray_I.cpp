double findMaxAverage(int* nums, int numsSize, int k) {
    int i, j, sum=0;
    double max = -10000, avg;
    for(i=0;i<numsSize;i++){
        sum += *(nums+i);
        if(i >= k-1){
            avg = (double)sum/k;
            if(max < avg){
                max = avg;
            }
            sum -= *(nums+i-k+1);
        }
    }
    return max;
}