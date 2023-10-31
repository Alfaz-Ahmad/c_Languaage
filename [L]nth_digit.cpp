int findNthDigit(int n){
    unsigned long long int i=1, l = 0, d, s = 10, c = 1;
    while(l<n){
        if(i == s){
            c++;
            s *= 10;
        }
        l += c;
        i++;
    }
    i--;
    while(l!=n-1){
        d = i%10;
        i /= 10;
        l--;
    }
    return d;
}