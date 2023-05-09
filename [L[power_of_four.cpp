# include<stdio.h>

bool isPowerOfFour(int n){
  if(n == 1){
    return true;
  }else if(n%4 == 0 && n > 0){
    unsigned long long int sum = 1;
    while(sum < n){
      sum *= 4;
    }
    if(sum == n){
      return true;
    }
  }
  return false;
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%s",isPowerOfFour(n)?"true":"false");
	return 0;
}
