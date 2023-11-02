bool isPalindrome(char * s){
    int i=0, j=0, l = strlen(s);
    while(i<l){
        if(*(s+i)>=65 && *(s+i)<=90){
            *(s+j++) = *(s+i++) + 32;
        }else if(*(s+i)>=48 && *(s+i)<=57){
            *(s+j++) = *(s+i++);
        }
        else if(*(s+i)<97 || *(s+i)>122){
            i++;
            continue;
        }else{
            *(s+j++) = *(s+i++);
        }
    }
    *(s+j) = '\0';
    l = j;
    for(i=0;i<l/2;i++){
        if(*(s+i)!=*(s+l-i-1)){
            return false;
        }
    }
    return true;
}