# include<stdio.h> 

void copy(char s1[], char s2[]){
	int i = 0;
	while(s2[i] != '\0'){
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
}

int main(){
	char source[1000];
	char destination[1000];
	puts("Enter the source string: ");
	gets(source);
	copy(destination, source);
	printf("Copied String: \n");
	printf(destination);
	return 0;
}
