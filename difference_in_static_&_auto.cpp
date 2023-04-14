#include<stdio.h>

void autop(){
	int i=1;
	for(;i<=20;i++){
		if(i%3==0){
			i++;
			break;	
		}
		printf("%d ", i);
	}
	printf("\n");
}

void staticp(){
	static int i=1;
	for(i;i<20;i++){
		if(i%3==0){
			i++;
			break;
		}
		printf("%d ",i);
	}
	printf("\n");
}

int main(){
	printf("Printing series by auto:\n");
	int i;
	for(i=1;i<=3;i++){
		autop();
	}
	
	printf("\nPrinting series by static:\n");
	for(i=1;i<=3;i++){
		staticp();
	}
}
