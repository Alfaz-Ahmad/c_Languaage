# include<stdio.h>

int main(){
	char str[1000], r;
	printf("Enter the string: ");
	gets(str);
	int i;
	for(i=0; str[i]!='\0';i++){
		if(str[i]>=97 && str[i]<=123){
			r = str[i];
			r = r - 32;
			str[i] = r;
		}
	}
	printf("Resultant String:\n");
	puts(str);
	return 0;
}
