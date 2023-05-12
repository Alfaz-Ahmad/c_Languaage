# include<stdio.h>
# include<stdlib.h>

bool containsDuplicate(int* nums, int numsSize){
  int i, max =0, min=0;
  for(i=0;i<numsSize;i++){
    if(max < *(nums+i)){
      max = *(nums+i);
    }else if(min > *(nums+i)){
      min = *(nums+i);
    }
  }
  int* hash = (int*)calloc(max+(-1*min)+1,sizeof(int));
  for(i=0;i<numsSize;i++){
    if(*(nums+i) >= 0){
      if(*(hash+(*(nums+i))) != 0){
        return true;
      }else{
        (*(hash+*(nums+i)))++;
      }
    }
    else{
      if(*(hash+(max + (-1*(*(nums+i))))) != 0){
        return true;
      }else{
        (*(hash+(max + (-1*(*(nums+i))))))++;
      }
    }
  }
  return false;
}

int main(){
	int n, i;
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("%s",containsDuplicate(arr, n)? "true": "false");
	return 0;
}
