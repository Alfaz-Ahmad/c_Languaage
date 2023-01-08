# include <stdio.h>
# include <math.h>

int count(int n){
	int c1;
	while(n!=0){
		n /= 10;
		c1++;
	}
	return c1;
}

int main(){
	int n, p, num, len, sum=0, i;
	printf("Enter a number: ");
	scanf("%d",&n);
	len = count(n);
	for(i=1;i<=len;i++){
		num = n%10;
		n /= 10;
		p = pow(10,len-i);
		sum = sum + (num*p);
	}
	printf("%d", sum);
}
