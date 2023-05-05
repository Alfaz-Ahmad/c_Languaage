# include<stdio.h>
# include<stdlib.h>

int missingNumber(int* nums, int numsSize){
  int i, d;
  int* hash = (int*)calloc(numsSize+1,sizeof(int));
  for(i=0;i<numsSize;i++){
    (*(hash+(*(nums+i))))++;
  }
  for(i=0;i<numsSize+1;i++){
    if(*(hash+i) == 0){
      return i;
    }
  }
  return 0;
}

int main(){
	int i, n;
	scanf("%d",&n);
	int* arr = (int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		scanf("%d",(arr+i));
	}
	printf("%d",missingNumber(arr, n));
	return 0;
}
