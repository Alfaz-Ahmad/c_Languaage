bool search(int n, int** matrix, int l, int h, int t){
    int m = (l+h)/2, i = (int)m/n, j = m%n;
    if(*(*(matrix+i)+j) == t){
        return true;
    }else if(l>=h){
        return false;
    }else if(*(*(matrix+i)+j)>t){
        return search(n, matrix, l, m-1, t);
    }else{
        return search(n, matrix, m+1, h, t);
    }
}

bool searchMatrix(int** matrix, int matrixSize, int* matrixColSize, int target){
    return search(*(matrixColSize), matrix, 0, (matrixSize * *(matrixColSize))-1, target);
}