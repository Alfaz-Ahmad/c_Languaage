void rotate(int** matrix, int matrixSize, int* matrixColSize) {
    int i, j, k = ceil((float)matrixSize/2), s = 0, l = matrixSize-1, temp;
    while(k--){
        i = 0;
        for(j=s;j<l;j++){
            temp = *(*(matrix+j)+s);
            *(*(matrix+j)+s) = *(*(matrix+l)+j);
            *(*(matrix+l)+j) = *(*(matrix+l-i)+l);
            *(*(matrix+l-i)+l) = *(*(matrix+s)+l-i);
            *(*(matrix+s)+l-i) = temp;
            i++;
        }
        s++;
        l--;
    }
}