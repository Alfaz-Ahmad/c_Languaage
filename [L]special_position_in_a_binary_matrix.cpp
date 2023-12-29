int numSpecial(int** mat, int matSize, int* matColSize) {
    int i, j, count = 0, x, y;
    for(i=0;i<matSize;i++){
        for(j=0;j<*(matColSize+i);j++){
            if(*(*(mat+i)+j) == 1){
                for(x=0;x<matSize;x++){
                    if(x!=i && *(*(mat+x)+j)==1){
                        break;
                    }
                }
                if(x != matSize){
                    continue;
                }
                for(y=0;y<*(matColSize+i);y++){
                    if(y!=j && *(*(mat+i)+y)==1){
                        break;
                    }
                }
                if(y != *(matColSize+i)){
                    continue;
                }
                count++;
            }
        }
    }
    return count;
}