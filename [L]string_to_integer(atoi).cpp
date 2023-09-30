long count(char* s, int i, bool si){
    long l=strlen(s), sum = 0, unit = 0, p;
    for(i;i<l;i++){
        if(*(s+i)>=48 && *(s+i)<=57){
            sum*=10;
            if(*(s+i)=='1'){
                sum+=1;
            }else if(*(s+i)=='2'){
                sum+=2;
            }else if(*(s+i)=='3'){
                sum+=3;
            }else if(*(s+i)=='4'){
                sum+=4;
            }else if(*(s+i)=='5'){
                sum+=5;
            }else if(*(s+i)=='6'){
                sum+=6;
            }else if(*(s+i)=='7'){
                sum+=7;
            }else if(*(s+i)=='8'){
                sum+=8;
            }else if(*(s+i)=='9'){
                sum+=9;
            }else if(*(s+i)=='0'){
                ;
            }
            else{
                assert(false);
            }
            if(sum>=2147483648){
                if(si){
                    return -2147483648;
                }else{
                    return 2147483647;
                }
            }
        }else{
            break;
        }
    }if(si){
        return -1*sum;
    }
    return sum;
}

int myAtoi(char * s){
    if((*(s)>=48 && *(s)<=57)){
        return count(s,0, false);
    }else if(*(s)==' '){
        int l = strlen(s), i;
        bool si = false;
        for(i=1;i<l;i++){
            if(*(s+i)>=48 && *(s+i)<=57){
                break;
            }else if(*(s+i)=='-'){
                i++;
                si = true;
                break;
            }else if(*(s+i)=='+'){
                i++;
                break;
            }else if(*(s+i) != ' '){
                return 0;
            }
        }
        return count(s, i, si);

    }else if(*(s)=='+'){
        return count(s,1,false);
      
    }else if(*(s) == '-'){
        return count(s,1,true);

    }else{
        return 0;
    }
    return 0;
}