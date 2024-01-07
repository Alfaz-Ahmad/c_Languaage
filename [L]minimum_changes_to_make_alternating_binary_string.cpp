int minOperations(char* s) {
    int i, min, count=0;
    for(i=0;i<strlen(s);i++){
        if(i%2 != *(s+i)-48){
            count++;
        }
    }
    min = count;
    count = 0;
    for(i=0;i<strlen(s);i++){
        if(i%2 == *(s+i)-48){
            count++;
        }
    }
    if(min > count){
        min = count;
    }
    return min;
}