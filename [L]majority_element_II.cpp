/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* majorityElement(int* nums, int numsSize, int* returnSize){
    int i, max = *(nums), min = 0, k = 0, l;
    for(i=0;i<numsSize;i++){
        if(max < *(nums+i)){
            max = *(nums+i);
        }
        if(min > *(nums+i)){
            min = *(nums+i);
        }
    }
    int* r = (int*)malloc(numsSize*sizeof(int));
    l = (int)numsSize/3;
    int* hash = (int*)calloc(max-min+1,sizeof(int));
    for(i=0;i<numsSize;i++){
        if(*(nums+i) < 0){
            (*(hash+(max - *(nums+i))))++;
            if(*(hash+(max-*(nums+i)))>l){
                *(r+k++) = *(nums+i);
                *(hash+(max-*(nums+i))) = -1*numsSize;
            }
        }else{
            (*(hash+(*(nums+i))))++;
            if(*(hash+(*(nums+i)))>l){
                *(r+k++) = *(nums+i);
                *(hash+(*(nums+i))) = -1*numsSize;
            }
        }
    }
    *(returnSize) = k;
    return r;
}