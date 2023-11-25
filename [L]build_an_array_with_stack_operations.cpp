/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** buildArray(int* target, int targetSize, int n, int* returnSize) {
    int i, j, k = 0, l = *(target+targetSize-1), p=0;
    char push[] = "Push";
    char pop[] = "Pop";
    char** r = (char**)malloc(2*l*sizeof(char*));
    for(i=1;i<=l;i++){
        r[k] = malloc(5*sizeof(char));
        for(j=0;j<4;j++){
            *(*(r+k)+j) = *(push+j);
        }
        *(*(r+k++)+4) = '\0';
        if(i == *(target+p)){
            p++;
            continue;
        }else{
            r[k] = (char*)malloc(4*sizeof(char));
            for(j=0;j<3;j++){
                *(*(r+k)+j) = *(pop+j);
            }
            *(*(r+k++)+3) = '\0';
        }
    }
    *(returnSize) = k;
    return r;
}