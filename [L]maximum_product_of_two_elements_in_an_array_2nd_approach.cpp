int maxProduct(int* nums, int numsSize) {
    int i, j, max1 = 0, max2 = 0;
    for(i=0;i<numsSize;i++){
        if(max1 < *(nums+i)){            
            max2 = max1;
            max1 =  *(nums+i);
        }else if(max2 < *(nums+i)){
            max2 = *(nums+i);
        }
    }
    return (max1-1)*(max2-1);
}