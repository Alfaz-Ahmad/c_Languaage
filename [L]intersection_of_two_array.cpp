# include<stdio.h>
# include<stdlib.h>

int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize){
  int i, j, k=0, c= 0, max = 0;
  for(i=0;i<nums1Size;i++){
    if(max<*(nums1+i)){
      max = *(nums1+i);
    }
  }
  int* hash = (int*)calloc(max+1,sizeof(int));
  for(i=0;i<nums1Size;i++){
    for(j=0;j<nums2Size;j++){
      if(*(nums1+i)   == *(nums2+j) && (*(hash+(*(nums1+i)))) == 0){
        (*(hash+(*(nums1+i))))++;
        c++;
      }
    }
  }
  *(returnSize) = c;
  int* r = (int*)malloc(c*sizeof(int));
  for(i=0;i<max+1;i++){
    if(*(hash+i)!=0){
      *(r+k) = i;
      k++;
    }
  }
  return r;
}

int main(){
	int i, n1, n2;
	int* r;
	scanf("%d",&n1);
	int* arr1 = (int*)malloc(n1*sizeof(int));
	for(i=0;i<n1;i++){
		scanf("%d",&arr1[i]);
	}
	scanf("%d",&n2);
	int* arr2 = (int*)malloc(n2*sizeof(int));
	for(i=0;i<n2;i++){
		scanf("%d",arr2[i]);
	}
	int* arr = (arr1, n1, arr2, n2, r);
	for(i=0;i<*(r);i++){
		printf("%d,",*(arr+i));
	}
	printf("Hello");
	return 0;
}
