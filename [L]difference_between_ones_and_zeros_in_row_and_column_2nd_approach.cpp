int** onesMinusZeros(int** grid, int gridSize, int* gridColSize, int* returnSize, int** returnColumnSizes) {
    int i, j;
    int* one_row = (int*)calloc(gridSize,sizeof(int));
    int* one_col = (int*)calloc(*(gridColSize),sizeof(int));    
    *(returnSize) = gridSize;
    *returnColumnSizes = malloc(gridSize*sizeof(int));
    for(i=0;i<gridSize;i++){
        *(*(returnColumnSizes)+i) = *(gridColSize);
    }
    for(i=0;i<gridSize;i++){
        for(j=0;j<*(gridColSize);j++){
            if(*(*(grid+i)+j) == 1){
                (*(one_row+i))++;
                (*(one_col+j))++;
            }
        }
    }
    for(i=0;i<gridSize;i++){
        for(j=0;j<*(gridColSize);j++){
            *(*(grid+i)+j) = *(one_row+i)+*(one_col+j)-(gridSize - *(one_row+i))-(*(gridColSize) - *(one_col+j));
        }
    }
    return grid;
}