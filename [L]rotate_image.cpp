void rotate(int** matrix, int matrixSize, int* matrixColSize) {
    int i, j, k = ceil((float)matrixSize/2), s = 0, l = matrixSize-1, temp;
    while(k--){
        for(i=s;i<l;i++){
            temp = *(*(matrix+s)+s);
            for(j=s;j<l;j++){
                *(*(matrix+j)+s) = *(*(matrix+j+1)+s);
            }
            for(j=s;j<l;j++){
                *(*(matrix+l)+j) = *(*(matrix+l)+j+1);
            }
            for(j=l;j>s;j--){
                *(*(matrix+j)+l) = *(*(matrix+j-1)+l);
            }for(j=l;j>s;j--){
                *(*(matrix+s)+j) = *(*(matrix+s)+j-1);
            }
            *(*(matrix+s)+s+1) = temp;
        }
        s++;
        l--;
    }    
}