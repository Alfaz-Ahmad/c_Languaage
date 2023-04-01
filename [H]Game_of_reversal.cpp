# include<stdio.h>
# include<string.h>

int main(){
	int i, j=0, k=0, l=0;
	char str[1000];
	printf("Enter a sting: ");
	gets(str);
	for(i=0; str[i]!='\0'; i++){
		if(str[i] == ' '){
			l++;
		}
	}
	char words[l+1][1000];
	for(i=0;i<l+1;i++){
		for(;;){
			if(str[k] == ' ' || str[k] == '\0'){
				j = 0;
				k++;
				break;
			}else{
				//printf(">>>%c\t %d %d\n", str[k], i, j);
				words[i][j++] = str[k++];
			}
		}
	}
	for(i=l;i>=0;i--){
		for(j=0;words[i][j]!='\0';j++){
			printf("%c", words[i][j]);
			//printf("%d %d\n", i, j);
		}
		printf(" ");
	}
}
