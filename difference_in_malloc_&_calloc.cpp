# include<stdio.h>
# include<stdlib.h>

int main(){
	int i;
	printf("Malloc default value:\n");
	int* ma = (int*)malloc(5*sizeof(int));
	for(i=0;i<5;i++){
		printf("%d %d\n",i,*(ma+i));
	}
	printf("\nCalloc default value:\n");
	int* ca = (int*)calloc(5,sizeof(int));
	for(i=0;i<5;i++){
		printf("%d %d\n",i, *(ca+i));
	}
	return 0;
}
