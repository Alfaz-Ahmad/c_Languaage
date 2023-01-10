#include<stdio.h>

int main() { 
    long int num1,num2;
    char oper;
    //printf("Enter two numbers then operator: ")
    scanf("%ld %ld \n%c",&num1,&num2,&oper);
    switch(oper) {
        case '+': 
            printf("%ld",num1 + num2); 
            break;
        case '-': 
            printf("%ld",num1 - num2);
            break; 
        case '*': 
            printf("%ld",num1 * num2); 
            break; 
        case '/':  
            if (num2!=0) { 
                printf("%ld",num1/num2); 
            }else{ 
                printf("Invalid Choice");
            } 
            break; 
        default :
            printf("Invalid Choice");
    }
}
