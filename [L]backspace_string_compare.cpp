bool backspaceCompare(char * s, char * t){
    int i, j, k = 0;
    char* s1 = (char*)malloc((strlen(s)+1)*sizeof(char));
    char* s2 = (char*)malloc((strlen(t)+1)*sizeof(char));
    for(i=0;i<strlen(s);i++){
        if(*(s+i)=='#'){
            if(k > 0){
                k--;
            }
        }else{
            *(s1+k++) = *(s+i);
        }
    }
    *(s1+k) = '\0';
    k = 0;
    for(i=0;i<strlen(t);i++){
        if(*(t+i)=='#'){
            if(k>0){
                k--;
            }
        }else{
            *(s2+k++) = *(t+i);
        }
    }
    *(s2+k) = '\0';
    if(strlen(s1)!=strlen(s2)){
        return false;
    }else{
        int l = strlen(s1);
        for(i=0;i<l;i++){
            if(*(s1+i)!=*(s2+i)){
                return false;
            }
        }
    }
    return true;
}