# include<stdio.h>

bool isPowerOfThree(int n){
  if(n == 1){
    return true;
  }else if(n%3 == 0 && n > 0){
    return isPowerOfThree(n/3);
  }
  return false;
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%s",isPowerOfThree(n)?"true":"false");
	return 0;
}
