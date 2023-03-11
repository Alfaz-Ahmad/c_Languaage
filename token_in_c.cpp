/*
Given a sentence,s, print each word of the sentence in a new line.
*/

# include<stdio.h>
# include<math.h>
# include<string.h>
# include<stdlib.h>

int main(){
	int i=0, j=0, c=0, k=0, l, v;
    char s[1000];
    scanf("%[^\n]", s);
    while(s[i]!='\0'){
    	if(s[i] == ' '){
    		c++;
		}
		i++;
	}
	char f[c+1][1000];
	
	i = k = j = 0;
	while(s[i] != '\0'){
		if(s[i] != ' '){
			f[j][k++] = s[i++];
		}else{
            f[j][k] = '\0';
			j++;
			k =0;
			i++;
		}
        f[j][k] = '\0';
	}

	for(i=0; i<c+1; i++){
		v = j = k = 0;
		for(j=0; f[i][j] != '\0'; j++){
			v++;
		}
		while(k < v){
			printf("%c", f[i][k]);
			k++;
		}
		printf("\n");
	}
    return 0;
}
