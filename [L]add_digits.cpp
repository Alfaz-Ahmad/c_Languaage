# include<stdio.h>

int addDigits(int num){
  int k=0;
  if(num > 9){
    while(num!=0){
      k += num%10;
      num /= 10;
    }
    return addDigits(k);
  }else if(num == 0){
    return 0;
  }
  return num;
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%d",addDigits(n));
	return 0;
}
