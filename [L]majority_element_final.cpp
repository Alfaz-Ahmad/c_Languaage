# include<stdio.h>
# include<stdlib.h>

int majorityElement(int* nums, int numsSize){
  int i, max=0, min = 0;
  for(i=0;i<numsSize;i++){
    if(*(nums+i) >= 0){
      if(*(nums+i) > max){
        max = *(nums+i);
      }
    }
    else{
      if(*(nums+i) < min){
        min = *(nums+i);
      }
    }
  }
  int *hash = (int*)calloc(max+(-1*min)+1,sizeof(int));
  for(i=0;i<numsSize;i++){
    if(*(nums+i) >= 0){
      hash[*(nums+i)]++;
      if(hash[*(nums+i)] > numsSize/2){
        return *(nums+i);
      }
    }else{
      (*(hash + (max + (-1*(*(nums+i))))))++;
      if(*(hash + (max + (-1*(*(nums+i))))) > numsSize/2){
        return *(nums+i);
      }
    }
  }
  return 0;
}

int main(){
	int i, n;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("%d",majorityElement(arr, n));
	return 0;
}
