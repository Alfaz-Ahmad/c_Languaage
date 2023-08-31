int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize){
  int i, k=0, max1 = 0, max2 = 0;
  for(i=0;i<nums1Size;i++){
    if(max1<*(nums1+i)){
      max1 = *(nums1+i);
    }
  }
    for(i=0;i<nums2Size;i++){
    if(max2<*(nums2+i)){
      max2 = *(nums2+i);
    }
  }
  int* hash1 = (int*)calloc(max1+1,sizeof(int));
  int* hash2 = (int*)calloc(max2+1,sizeof(int));
  for(i=0;i<nums1Size;i++){
    (*(hash1+(*(nums1+i))))++;
  }
  for(i=0;i<nums2Size;i++){
    (*(hash2+(*(nums2+i))))++;
  }
  int* r = (int*)malloc(max1*sizeof(int));
  for(i=0;i<=max1 && i<=max2;i++){
    if(*(hash1+i)!=0 && *(hash2+i)!=0){
        *(r+k++) = i;
    }
  }
  *(returnSize) = k;
  return r;
}
