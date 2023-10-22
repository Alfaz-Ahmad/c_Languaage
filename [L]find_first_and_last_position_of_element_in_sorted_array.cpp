/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int search1(int* r, int l, int h, int k){
	int m = (l+h)/2;
	if(*(r+m)==k && (m==l || *(r+m-1)<*(r+m))){
		return m;
	}else if(h-l==0){
		return -1;	
	}else if(*(r+m) >= k){
		return search1(r,l,m-1,k);
	}else{
		return search1(r, m+1, h, k);
	}
}

int search2(int* r, int l, int h, int k){
	int m = (l+h)/2;
	if(*(r+m)==k &&  (m==h||*(r+m+1)>*(r+m))){
		return m;
	}else if(h==l){
		return -1;
	}else if(*(r+m) <= k){
		return search2(r,m+1,h,k);
	}else{
		return search2(r,l,m,k);
	}
}

int* searchRange(int* nums, int numsSize, int target, int* returnSize){
    *(returnSize) = 2;
    int* r = (int*)malloc(2*sizeof(int));
		if(numsSize == 0 || (*(nums) == *(nums+numsSize-1) && *(nums) != target) || *(nums) > target || *(nums+numsSize-1) < target){
			*(r) = -1;
			*(r+1) = -1;
			return r;
		}
    *(r) = search1(nums, 0, numsSize-1, target);
    *(r+1) = search2(nums, 0, numsSize-1, target);
    return r;
}