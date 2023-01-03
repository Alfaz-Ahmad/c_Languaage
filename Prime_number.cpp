#include <stdio.h>

int main(){
	int i = 1,num,mod,c=0;
	printf("Enter a number: ");
	scanf("%d",&num);
	while (i < num-1){
		mod = num%i;
		if (mod == 0){
			c++;
		}
		i++;
	}
	if (c==1){
		printf("YES! %d is a prime number.",num);
	}
	else{
		printf("NO! %d is not a prime number.",num);
	}
}
