# include<stdio.h>
# include<string.h>

int main(){
	int i, l=0;
	char str[1000];
	printf("Enter a sting: ");
	gets(str);
	for(i=0; str[i]!='\0'; i++){
		if((str[i]>=65 && str[i]<=90)){
			l++;
		}
	}
	printf("Number of capital letters in string: %d", l);
}
