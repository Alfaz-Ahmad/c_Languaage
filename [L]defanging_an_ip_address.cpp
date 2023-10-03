char * defangIPaddr(char * address){
    int i, l = strlen(address), c=0, j=0;
    for(i=0;i<l;i++){
        if(*(address+i) == '.'){
            c++;
        }
    }
    char* r = (char*)malloc((l+(2*c)+1)*sizeof(char));
    for(i=0;i<l;i++){
        if(*(address+i) == '.'){
            *(r+j++) = '[';
            *(r+j++) = '.';
            *(r+j++) = ']';
        }
        else{
            *(r+j++) = *(address+i);
        }
    }
    *(r+j) = '\0';
    return r;
}