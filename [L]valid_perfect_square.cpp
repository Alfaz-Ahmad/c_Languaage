# include<stdio.h>
# include<math.h>

bool isPerfectSquare(int num){
  float p;
  p = sqrt(num);
  p = p-(int)p;
  if(p!=0.0){
    return false;
  }
  return true;
}

int main(){
	int n;
	scanf("%d",&n);
	printf("%s", isPerfectSquare(n)?"true":"false");
	return 0;
}
