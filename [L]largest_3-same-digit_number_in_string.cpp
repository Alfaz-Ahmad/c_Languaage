char* largestGoodInteger(char* num) {
    int i, max = -1;
    char* r = (char*)malloc(4*sizeof(char));
    for(i=0;i<strlen(num)-2;i++){
        if(*(num+i) == *(num+i+1) && *(num+i+1) == *(num+i+2)){
            if(max < *(num+i) - 48){
                max = *(num+i) - 48;
            }
            i += 2;
        }
    }
    if(max == -1){
        *(r) = '\0';
        return r;
    }
    *(r) = max + 48;
    *(r+1) = *(r);
    *(r+2) = *(r+1);
    *(r+3) = '\0';
    return r;
}