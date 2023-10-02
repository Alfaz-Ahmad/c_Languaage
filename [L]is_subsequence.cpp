bool isSubsequence(char * s, char * t){
    int i=0, j=0, ls = strlen(s), lt = strlen(t), c = 0;
    while(i<ls && j<lt){
        if(*(s+i) == *(t+j)){
            i++;
            c++;
        }
        j++;
    }
    if(c == ls){
        return true;
    }
    return false;
}