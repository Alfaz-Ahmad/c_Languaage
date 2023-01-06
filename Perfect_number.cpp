# include<stdio.h>

int main(){
	unsigned int num,n,d,sum,i=1;
	printf("Enter a number: ");
	scanf("%u",&num);
	while(i<=(num/2)){
		if(num%i == 0){
			sum += i;
		}
		i++;
	}
	if(num==sum){
		printf("YES");
	}else{
		printf("NO");
	}
}
