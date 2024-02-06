int search(int* nums, int l, int h, int x){
    if(l == h){
        return l;
    }else{
        int m = (l+h)/2;
        if(*(nums+m) >= x){
            return search(nums, l, m, x);
        }else{
            return search(nums, m+1, h, x);
        }
    }
}

int searchInsert(int* nums, int numsSize, int target){
    int index = search(nums, 0, numsSize-1, target);
    if(index == numsSize-1){
        if(*(nums+index) < target){
            return index+1;
        }
    }
    return index;
}