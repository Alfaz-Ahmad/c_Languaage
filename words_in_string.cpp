
# include<stdio.h>
# include<string.h>

int main(){
	int i, j, l=0;
	char str[1000];
	printf("Enter a sting: ");
	gets(str);
	for(i=0; str[i]!='\0'; i++){
		if(str[i] == ' '){
			l++;
		}
	}
	printf("Words in the string:\n");
	for(i=0; str[i] != '\0'; i++){
		if(str[i] == ' '){
			printf("\n");
		}else{
			printf("%c", str[i]);
		}
	}
}
