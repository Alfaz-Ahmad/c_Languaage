int cb(int n){
    unsigned long long int m=1, c=0;
    while(m<=n && c<=10){
        if(n&m){
            c++;
        }
        m = m<<1;
    }
    return c;
}

int sumIndicesWithKSetBits(int* nums, int numsSize, int k){
    if(k==0){
        return *(nums);
    }else{
        int i, sum = 0;
        for(i=1;i<numsSize;i++){
            if(cb(i)==k){
                sum += *(nums+i);
            }
        }
        return sum;
    }
    assert(false);
}