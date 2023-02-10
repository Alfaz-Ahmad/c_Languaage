# include <stdio.h>

int main(){
	char var;
	printf("Ente a character: ");
	scanf("%c",&var);
	if ((var==65)||(var == 69)||(var == 73)||(var == 79)||(var == 85)){
		printf("Vowel");
	}
	else if ((var==97)||(var == 101)||(var == 105)||(var == 101)||(var == 117)){
		printf("Vowel");
	}
	else if(((var>=65)&&(var<=90))||((var>=97)&&(var<=122))){
		printf("Consonent");
	}
	else if((var >= 48)&&(var <= 57)){
		printf("Digit");
	}
	else{
		printf("Special Symbol");
	}
}

