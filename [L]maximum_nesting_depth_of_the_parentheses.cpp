int maxDepth(char * s){
    int i, c = 0, max = 0;
    for(i=0;i<strlen(s);i++){
        if(*(s+i) == '('){
            c++;
        }else if(*(s+i) == ')'){
            c--;
        }
        if(c > max){
            max = c;
        }
    }
    return max;
}