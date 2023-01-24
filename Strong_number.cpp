# include<stdio.h>

unsigned long long int fact(int num){
	unsigned long long int fac=1, i=1;
	while(i<=num){
		fac*=i;
		i++;
	}
	return fac;
}

int main(){
	unsigned long long int sum=0, f, k;
	int c, i = 1, num, d;
	printf("Enter a number: ");
	scanf("%d",&num);
	k = num;
	while(num != 0){
		d = num%10;
		f = fact(d);
		sum = sum + f;
		num = num/10;
	}
	if (sum == k){
		printf("YES!");
	}else{
		printf("NO!");
	}
}
