bool arrayStringsAreEqual(char** word1, int word1Size, char** word2, int word2Size) {
    int i, j, k=0, size = 0;
    for(i=0;i<word1Size;i++){
        for(j=0;*(*(word1+i)+j)!='\0';j++){
            size++;
        }
    }
    char* string = (char*)malloc((size+1)*sizeof(char));
    for(i=0;i<word1Size;i++){
        for(j=0;*(*(word1+i)+j)!='\0';j++){
            *(string+k++) = *(*(word1+i)+j);
            printf("%c",*(string+k-1));
        }
    }
    *(string+k) = '\0';
    k = 0;
    for(i=0;i<word2Size;i++){
        for(j=0;*(*(word2+i)+j)!='\0';j++){
            if(*(string+k) == '\0'){
                return false;
            }else if(*(*(word2+i)+j) != *(string+k)){
                return false;
            }
            k++;
        }
    }
    if(k!=size){
        return false;
    }
    return true;
}