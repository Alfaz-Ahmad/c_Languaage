# include<stdio.h>
# include<stdlib.h>

int main(){
	int top = -1, c;
	bool empty = true, full = false;
	printf("1: Push an element.\n");
	printf("2: Pop the top element.\n");
	printf("3: Show the top element.\n");
	//let the stack size is 20
	int* stack = (int*)malloc(20*sizeof(int));
	do{
		printf("Enter your choice: ");
		scanf("%d",&c);
		if(c == 1){
			if(full){
				printf("Stack is full!\n");
			}else{
				top++;
				if(top == 0){
					empty = false;
				}
				int num;
				printf("Enter a number: ");
				scanf("%d",&num);
				stack[top]	= num;
				if(top == 19){
					full = true;
				}
			}
		}else if(c == 2){
			if(empty){
				printf("Stack is Empty!\n");
			}else{
				if(top == 0){
					empty = true;
				}else if(top == 19){
					full = false;
				}
				top--;
			}
		}else if(c == 3){
			if(top == -1){
				printf("Stack is empty!\n");
			}else{
				int i;
				for(i=top;i>=0;i--){
					printf("%d ",stack[i]);
				}
				printf("\n");
			}
		}
	}while(c==1 || c==2 || c==3);
}