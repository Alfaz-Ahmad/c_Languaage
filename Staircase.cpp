# include<stdio.h>

int main(){
	int num,i=1,j=1;
	printf("How many of staircase wanted to print: ");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		for (j=num;j>=i+1;j--){
			printf(" ");
		}
		for(j=1;i>=j;j++){
			printf("#");
		}
		printf("\n");
	}
}
