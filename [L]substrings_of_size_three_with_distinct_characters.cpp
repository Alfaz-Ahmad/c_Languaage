int countGoodSubstrings(char* s) {
    int i, c = 0;
    for(i=0;i+2<strlen(s);i++){
        if(*(s+i)!=*(s+i+1) && *(s+i)!=*(s+i+2) && *(s+i+1) != *(s+i+2)){
            c++;
            printf("%d\n", i);
        }
    }
    return c;
}