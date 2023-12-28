void sort(int* nums, int n){
    int i, j, k;
    for(i=1;i<n;i++){
        k = *(nums+i);
        j = i-1;
        while(j>=0 && k < *(nums+j)){
            *(nums+j+1) = *(nums+j);
            j--;
        }
        *(nums+j+1) = k;
    }
    return;
}

int maxProduct(int* nums, int numsSize) {
    sort(nums, numsSize);
    return (*(nums+numsSize-1)-1)*(*(nums+numsSize-2)-1);
}