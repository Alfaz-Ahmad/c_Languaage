/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** shiftGrid(int** grid, int gridSize, int* gridColSize, int k, int* returnSize, int** returnColumnSizes) {
    int i, a, b, c, d;
    *(returnSize) = gridSize;
    *returnColumnSizes = malloc(gridSize*sizeof(int));
    for(i=0;i<gridSize;i++){
        *(*(returnColumnSizes)+i) = *(gridColSize);
    }
    while(k--){
        int temp = *(*(grid+gridSize-1)+*(gridColSize)-1);
        for(i=(gridSize**(gridColSize))-1;i>=1;i--){
            a = i/gridColSize[0];
            b = i%gridColSize[0];
            c = (i-1)/gridColSize[0];
            d = (i-1)%gridColSize[0];
            *(*(grid+a)+b) = *(*(grid+c)+d);
        }
        *(*(grid)) = temp;
    }  
    return grid;
}