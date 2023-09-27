int countSegments(char * s){
    int i=0, l = strlen(s), c = 0;
    if(!l){
        return 0;
    }if(*(s)!=' '){
        c++;
    }
    for(i=1;i<l;i++){
        if(*(s+i)!=' ' && (*(s+i-1)==' ')){
            c++;
        }
    }
    return c;
}