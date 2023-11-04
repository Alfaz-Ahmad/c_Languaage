int numSub(char * s){
    unsigned long long int c=0, d, n;
    int l = strlen(s), i=0, j;
    bool b = false;
    while(i<l){
        if(*(s+i)=='1' && !b){
            if(i == l-1){
                c = (c+1)%(1000000000+7);
                break;
            }
            j = i;
            b = true;
        }else if(*(s+i) == '0' && b){
            n = i-j;
            d = n*(n+1)/2;
            c = (d+c)%(1000000000+7);
            b = false;
        }
        if(*(s+i)=='1' && i == l-1 && b){
            n = i-j+1;
            d = n*(n+1)/2;
            c = (d+c)%(1000000000+7);
            b = false;
        }
        i++;
    }
    return c;
}