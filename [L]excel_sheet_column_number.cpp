int titleToNumber(char* columnTitle) {
    int i, l = strlen(columnTitle), d;
    unsigned long long int sum = 0, p;
    for(i=0;i<l;i++){
        p = pow(26,l-i-1);
        d = *(columnTitle+i)-64;
        sum += p*d;
    }
    return sum;
}