# include<stdio.h>
# include<stdlib.h>

bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize){
    int i, max = *(candies);
    bool* arr = (bool*)malloc(candiesSize*sizeof(bool));
    for(i=0;i<candiesSize;i++){
        if(max<*(candies+i)){
            max = *(candies+i);
        }
    }
    *(returnSize) = candiesSize;
    for(i=0;i<candiesSize;i++){
        if((*(candies+i))+extraCandies >= max){
            arr[i] = true;
        }else{
            arr[i] = false;
        }
    }
    return arr;
    //by:- Alfaz-Ahmad
}

int main(){
	int i, n, e;
	scanf("%d",&n);
	int candies[n];
	for(i=0;i<n;i++){
		scanf("%d",&candies[i]);
	}
	scanf("%d",&e);
	int *ptr;
	bool *p = kidsWithCandies(candies, n, e, ptr);
	printf("[");
	for(i=0;i<*(ptr);i++){
		printf("%s",*(p+i)?"true":"false");
		if(i+1 != *(ptr)){
			printf(",");
		}else{
			printf("]");
		}
	}
	return 0;
}
