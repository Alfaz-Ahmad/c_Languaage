double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
    int i=0, j=0, k=0;
    long long int n = nums1Size+nums2Size;
    int* s = (int*)malloc((nums1Size+nums2Size)*sizeof(int));
    while(j<nums1Size || k<nums2Size){
        if(j==nums1Size){
            *(s+i++) = *(nums2+k++);
        }else if(k == nums2Size){
            *(s+i++) = *(nums1+j++);
        }
        else if(*(nums1+j) > *(nums2+k)){
            *(s+i++) = *(nums2+k++);
        }else{
            *(s+i++) = *(nums1+j++);
        }
    }
    for(i=0;i<n;i++){
        printf("%d ",*(s+i));
    }
    if((nums1Size+nums2Size)%2==1){
        return (double)*(s+((n)/2));
    }else{
        printf("\n%d %d",(s[(n/2)]), s[((n/2)-1)]);
        return (((double)((s[(n/2)-1])+(s[n/2]))/2));
    }
}