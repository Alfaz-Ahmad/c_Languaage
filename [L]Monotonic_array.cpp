bool isMonotonic(int* nums, int numsSize){
    if(numsSize <= 2){
        return true;
    }else{
        int i, n_difference = 0, p_difference=0;
        for(i=0;i<numsSize-1;i++){
            if(*(nums+i+1)-*(nums+i) > 0){
                p_difference++;
            }else if(*(nums+i+1)-*(nums+i) < 0){
                n_difference++;
            }if(*(nums+i+1)-*(nums+i) > 0 && n_difference){
                return false;
            }else if(*(nums+i+1)-*(nums+i) < 0 && p_difference){
                return false;
            }
        }
        return true;
    }
    assert(false);
}