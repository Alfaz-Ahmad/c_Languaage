/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* intersect(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize){
    int i, max1=-1, max2=-1, u, k = 0, s;
    for(i=0;i<nums1Size;i++){
        if(*(nums1+i)>max1){
            max1 = *(nums1+i);
        }
    }
    for(i=0;i<nums2Size;i++){
        if(*(nums2+i)>max2){
            max2 = *(nums2+i);
        }
    }
    u = max1;
    if(u > max2){
        u = max2;
    }
    s = nums1Size;
    if(s > nums2Size){
        s = nums2Size;
    }
    //printf("%d %d %d\n",max1, max2, u);
    int* hash = (int*)calloc(u+1,sizeof(int));
    int* r = (int*)malloc(s*sizeof(int));
    for(i=0;i<nums1Size;i++){
        if(*(nums1+i)<=u){
            (*(hash+(*(nums1+i))))++;
        }
    }
    for(i=0;i<nums2Size;i++){
        if(*(nums2+i)<=u){
            //printf("%d ",*(nums2+i));
            if(*(hash+(*(nums2+i)))!=0){
                *(r+k++) =  *(nums2+i);
                (*(hash+(*(nums2+i))))--;
            }
        }
    }
    *(returnSize) = k;
    return r;
}