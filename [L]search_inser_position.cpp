# include<stdio.h>

int searchInsert(int* nums, int numsSize, int target){
    int i = 0;
    if(*(nums) > target){
        return 0;
    }
    while(i < numsSize){
        if(target <= *(nums+i)){
            break;
        }
        i++;
    }
    return i;
}

int main(){
	int n, i, arr[1000], t;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	scanf("%d",&t);
	printf("%d",searchInsert(arr, n, t));
	return 0;
}
