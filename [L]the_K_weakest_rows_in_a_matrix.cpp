/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

// int srch(int* r, int l, int h){
// 	int m = (l+h)/2;
// 	if(*(r+m)==1 &&  (m==h-1||*(r+m+1)<*(r+m))){
// 		return m;
// 	}else if(h-l==0){
// 		return -1;
// 	}else if(*(r+m) == 1){
// 		return srch(r,m+1,h);
// 	}else{
// 		return srch(r,l,m);
// 	}
// }

int* kWeakestRows(int** mat, int matSize, int* matColSize, int k, int* returnSize){
    int i, j, p = 0, c;
    int* r = (int*)malloc(matSize*sizeof(int));
    int* l = (int*)malloc(matSize*sizeof(int));
    int* s = (int*)malloc(k*sizeof(int));
    // for(i=0;i<matSize;i++){
    //     j = srch((*(mat+i)),0,*(matColSize+i));
    //     *(r+p++) = j+1;
    // }
    for(i=0;i<matSize;i++){
        c = 0;
        for(j=0;j<*(matColSize);j++){
            if(*(*(mat+i)+j) == 0){
                break;
            }
            c++;
        }
        *(r+p++) = c;
    }
    int* hash = (int*)calloc(*(matColSize)+1,sizeof(int));
    for(i=0;i<matSize;i++){
        (*(hash+*(r+i)))++;
    }
    p = 0;
    for(i=0;p<k && i<*(matColSize)+1;i++){
        if(*(hash+i)!=0){
            for(j=0;j<matSize;j++){
                if(i==*(r+j)){
                    (*(hash+i))--;
                    *(s+p++) = j;
                    *(r+j)=-1;
                    i--;
                }
            }
        }
    }
    *(returnSize) = k;
    return s;
}