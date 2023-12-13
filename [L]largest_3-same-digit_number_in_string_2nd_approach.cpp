char* largestGoodInteger(char* num) {
    int i, max = -1;
    char* r = (char*)malloc(4*sizeof(char));
    int* hash = (int*)calloc(10,sizeof(int));
    (*(hash+(*(num) - 48)))++;
    (*(hash+(*(num+1) - 48)))++;
    for(i=2;i<strlen(num);i++){
        (*(hash+(*(num+i) - 48)))++;
        if(*(hash+(*(num+i) - 48)) == 3){
            if(max < *(num+i) - 48){
                max = *(num+i) - 48;
            }
        }
        (*(hash+(*(num+i-2) - 48)))--;
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
