int maxScore(char* s) {
    int i, ones=0, zeros=0, max = 0;
    for(i=0;i<strlen(s);i++){
        if(*(s+i) == '1'){
            ones++;
        }
    }
    for(i=0;i<strlen(s)-1;i++){
        if(*(s+i) == '0'){
            zeros++;
        }else{
            ones--;
        }
        if(max < ones+zeros){
            max = ones+zeros;
        }
    }
    return max;
}