/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** onesMinusZeros(int** grid, int gridSize, int* gridColSize, int* returnSize, int** returnColumnSizes) {
    int i, j;
    int* one_row = (int*)calloc(gridSize,sizeof(int));
    int* zer_row = (int*)calloc(gridSize,sizeof(int));
    int* one_col = (int*)calloc(*(gridColSize),sizeof(int));
    int* zer_col = (int*)calloc(*(gridColSize),sizeof(int));
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
            }else{
                (*(zer_row+i))++;
                (*(zer_col+j))++;
            }
        }
    }
    for(i=0;i<gridSize;i++){
        for(j=0;j<*(gridColSize);j++){
            *(*(grid+i)+j) = *(one_row+i)+*(one_col+j)-*(zer_row+i)-*(zer_col+j);
        }
    }
    return grid;
}