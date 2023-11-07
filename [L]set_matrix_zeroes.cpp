void setZeroes(int** matrix, int matrixSize, int* matrixColSize){
    int i, j;
    bool* rowzero = (bool*)calloc(matrixSize,sizeof(bool));
    bool* colzero = (bool*)calloc(*(matrixColSize),sizeof(bool));
    for(i=0;i<matrixSize;i++){
        for(j=0;j<*(matrixColSize);j++){
            if(*(*(matrix+i)+j)==0){
                *(rowzero+i) = true;
                *(colzero+j) = true;
            }
        }
    }
    for(i=0;i<matrixSize;i++){
        for(j=0;j<*(matrixColSize);j++){
            if(*(rowzero+i) == true || *(colzero+j)==true){
                *(*(matrix+i)+j) = 0;
            }
        }
    }
}