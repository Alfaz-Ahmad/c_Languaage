int* spiralOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize){
    int i, c = 0, temp;
    int ri = 0;
    int rf = matrixSize;
    int ci = 0;
    int cf = *(matrixColSize);
    int l = rf*cf;
    *(returnSize) = l;
    int* r = (int*)malloc(l*sizeof(int));
    printf("%d %d\n",rf, cf);
    while(c < l){
        for(i=ci;i<cf;i++){
            *(r+c++) = *(*(matrix+ri)+i);
        }
        if(c == l){
            return r;
        }
        ri++;
        for(i=ri;i<rf;i++){
            *(r+c++) = *(*(matrix+i)+(cf-1));
        }
        if(c == l){
            return r;
        }
        cf--;
        for(i=cf-1;i>=ci;i--){
            *(r+c++) = *(*(matrix+(rf-1))+i);
        }
        rf--;
        for(i=rf-1;i>=ri;i--){
            *(r+c++) = *(*(matrix+i)+ci);
        }
        ci++;
    }
    return r;
}