# include<stdio.h>

int main(){
	char str[1000], r;
	printf("Enter the string: ");
	gets(str);
	int i;
	for(i=0; str[i]!='\0';i++){
		if(str[i]>=65 && str[i]<=90){
			//r = str[i];
			str[i] = str[i] + 32;
			//str[i] = r;
		}
	}
	printf("Resultant String:\n");
	puts(str);
	return 0;
}
