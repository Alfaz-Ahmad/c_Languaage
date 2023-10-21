bool makeEqual(char ** words, int wordsSize){
    int temp = 0, i, j;
    int* hash = (int*)calloc(26,sizeof(int));
    if(wordsSize == 1){
        return true;
    }
    for(i=0;i<wordsSize;i++){
        for(j=0;j<strlen((*(words+i)));j++){
            (*(hash+(*(*(words+i)+j)-97)))++;
        }
    }
    for(i=0;i<26;i++){
        if(*(hash+i) != 0){
            float f = ((float)*(hash+i))/wordsSize;
            int d = f;
            if(f-d != 0.00){
                return false;
            }
        }
    }
    return true;
}