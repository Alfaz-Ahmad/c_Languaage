# include<stdio.h>
# include<string.h>

int comp(char s1[], char s2[]){
	int i, j;
	i = j = 0;
	while((i<strlen(s2)) && (j<strlen(s1))){
		if(s1[i] != s2[i]){
			return(s1[i] - s2[i]);
		}
		i++;
		j++;
	}
	return 0;
}

int main(){
	char str1[1000], str2[1000];
	printf("Enter first string: ");
	gets(str1);
	printf("Enter Second String: ");
	gets(str2);
	if(comp(str1, str2) == 0){
		printf("Strings are equal.");
	}else{
		printf("Strings are not equal.");
	}
	return 0;
}
