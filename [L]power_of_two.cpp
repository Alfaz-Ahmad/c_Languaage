# include<stdio.h>

bool isPowerOfTwo(unsigned long long int n){
  if(n == 1){
    return true;
  }else if(n%2 == 0 && n > 0){
    unsigned long long int sum = 1;
    while(sum < n){
      sum *= 2;
    }
    if(sum == n){
      return true;
    }
  }
  return false;
}

int main(){
	unsigned long long int n;
	scanf("%llu",&n);
	printf("%s",isPowerOfTwo(n)?"True":"False");
	return 0;
}
