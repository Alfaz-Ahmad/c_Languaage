int minSteps(char* s, char* t) {
    int i, rtn_cnt = 0;
    int* freq = (int*)calloc(26,sizeof(int));
    for(i=0;i<strlen(s);i++){
        (*(freq+(*(s+i)-97)))++;
        (*(freq+(*(t+i)-97)))--;
    }
    for(i=0;i<26;i++){
        if(*(freq+i) > 0){
            rtn_cnt+=*(freq+i);
        }
    }
    return rtn_cnt;
}