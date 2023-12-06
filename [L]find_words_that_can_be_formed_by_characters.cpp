int countCharacters(char** words, int wordsSize, char* chars) {
    int i, j, returnCount = 0;
    int* freq = (int*)calloc(26,sizeof(int));
    for(i=0;i<strlen(chars);i++){
        (*(freq+(*(chars+i) - 97)))++;
    }
    for(i=0;i<wordsSize;i++){
        int* hash = (int*)calloc(26,sizeof(int));
        for(j=0;*(*(words+i)+j)!='\0';j++){
            if(*(hash+(*(*(words+i)+j) - 97)) == *(freq+(*(*(words+i)+j) - 97))){
                break;
            }
            (*(hash+(*(*(words+i)+j) - 97)))++;
            if(*(*(words+i)+j+1) == '\0'){
                returnCount += (j+1);
            }    
        }
    }
    return returnCount;
}