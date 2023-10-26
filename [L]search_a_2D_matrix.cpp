bool searchMatrix1(int** matrix, int matrixSize, int* matrixColSize, int target){
    int i, j;
    for(i=0;i<matrixSize;i++){
        for(j=0;j<*(matrixColSize);j++){
            if(*(*(matrix+i)+j) == target){
                return true;
            }else if(*(*(matrix+i)+j) > target){
                return false;
            }
        }
    }
    return false;
}