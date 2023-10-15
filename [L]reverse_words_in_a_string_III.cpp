char * reverseWords(char * s){
    int i, j, c=0, index = 0, k =0;
    char* return_string = (char*)malloc((strlen(s)+1)*sizeof(char));
    for(i=0;i<strlen(s);i++){
        if(*(s+i) != ' ' && (i+1==strlen(s) || *(s+i+1) == ' ')){
            for(j=i;j>=index;j--){
                *(return_string+k++) = *(s+j);
            }
        }
        if(*(s+i)==' ' && *(s+i-1) != ' '){
            *(return_string+k++) = *(s+i);
            index = i+1;
        }
    }
    *(return_string+k) = '\0';
    return return_string;
}