char findTheDifference(char * s, char * t){
    int i;
    int* hash1 = (int*)calloc(26,sizeof(int));
    int* hash2 = (int*)calloc(26,sizeof(int));
    for(i=0;i<strlen(s);i++){
        (*(hash1+(*(s+i)-97)))++;
    }
    for(i=0;i<strlen(t);i++){
        (*(hash2+(*(t+i)-97)))++;
    }
    for(i=0;i<26;i++){
        if(*(hash1+i)!=*(hash2+i)){
            return i+97;
        }
    }
    assert(false);
    return 0;
}