char* largestOddNumber(char* num) {
    int i, l = strlen(num);
    for(i=l-1;i>=0;i--){
        if((*(num+i) - 48)%2 == 1){
            if(i == l-1){
                return num;
            }else{
                *(num+i+1) = '\0';
                return num;
            }
        }
    }
    *(num) = '\0';
    return num;
}