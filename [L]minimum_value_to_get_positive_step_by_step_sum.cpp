int minStartValue(int* nums, int numsSize){
    int s=1;
    while(true){
        int sum = s, i;
        for(i=0;i<numsSize;i++){
            if(*(nums+i)+sum > 0){
                sum += *(nums+i);
            }else{
                s = s - (*(nums+i) + sum);
                s++;
                break;
            }if(i == numsSize-1){
                return s;
            }
        }
    }
    assert(false);
}