# include<stdio.h>

int lastStoneWeight(int* stones, int stonesSize){
  if(stonesSize > 1){
    int max, smax, in, i, sin;
    if(*(stones) > *(stones+1)){
      max = *(stones);
      smax = *(stones+1);
      in = 0;
      sin = 1;
    }else{
      max = *(stones+1);
      smax = *(stones);
      in = 1;
      sin = 0;
    }
    for(i=2;i<stonesSize;i++){
      if(max < *(stones+i)){
        smax = max;
        max = *(stones+i);
        sin = in;
        in = i;
      }else if(smax < *(stones+i)){
        smax = *(stones+i);
        sin = i;
      }
    }
    *(stones+in) = max - smax;
    for(i=sin;i<stonesSize-1;i++){
      *(stones+i) = *(stones+i+1);
    }
    return lastStoneWeight(stones,stonesSize-1);
  }else if(stonesSize < 1){
    return 0;
  }
  return *(stones);
}

int main(){
	int i, n;
	int arr[10000];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("%d",lastStoneWeight(arr, n));
	return 0;
}
