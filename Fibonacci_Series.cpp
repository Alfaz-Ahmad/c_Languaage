# include <stdio.h>

int main(){
	int a, b, c;
	a = 0;
	b = 1;
	c = 1;
	int i = 1;
	int cho;
	printf("Enter the terms of Fibonacci Series(n > 3): ");
	scanf("%lld", &cho);
	printf("\n%d %d ", a, b);
	while (i < cho - 1){
		c = a + b;
		printf("%lld ", c);
		a = b;
		b = c;
		i ++;
	}
	printf("\n%lld ", b);
	return 0;
}
