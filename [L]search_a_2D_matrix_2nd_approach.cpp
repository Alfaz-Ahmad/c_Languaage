bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target){
    int i=0, j=0;
    while(true){
        if(j == *(matrixColSize)){
            j = 0;
            i++;
        }
        if(i == matrixSize){
            return false;
        }
        if(*(*(matrix+i)+j) == target){
            return true;
        }else if(*(*(matrix+i)+j) > target){
            return false;
        }
        j++;
    }
    assert(false);
}