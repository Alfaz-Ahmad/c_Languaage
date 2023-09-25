bool isprime(int n){
    int i;
    for(i=2;i<=n/2;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}


int sumOfSquares(int* nums, int numsSize){
    if(numsSize==1){
        return (*(nums)**(nums));
    }
    else if(isprime(numsSize)){
        return ((*(nums)**(nums))+(*(nums+numsSize-1)**(nums+numsSize-1)));
    }else{
        int i, sum = 0;
        for(i=0;i<numsSize;i++){
            if(numsSize%(i+1)==0){
                sum += (*(nums+i)**(nums+i));
            }
        }
        return sum;
    }
    assert(false);
    return 0;
}