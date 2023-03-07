//Given a string, , consisting of alphabets and digits,
//find the frequency of each digit in the given string.

# include<stdio.h>
# include<string.h>

int main(){
	char s[1000];
	int i, j, l, num[10]={0}, c =0;
	scanf("%s", s);
	l = strlen(s);
	//printf("%d", l);
	for(i=0; i<l; i++){
		if(s[i] >= '0' && s[i] <= '9'){
			if(s[i] == '0') num[0]++;
			else if(s[i] == '1') num[1]++;
			else if(s[i] == '2') num[2]++;
			else if(s[i] == '3') num[3]++;
			else if(s[i] == '4') num[4]++;
			else if(s[i] == '5') num[5]++;
			else if(s[i] == '6') num[6]++;
			else if(s[i] == '7') num[7]++;
			else if(s[i] == '8') num[8]++;
			else num[9]++;
		}
	}
	for(i=0; i<10; i++){
		printf("%d ", num[i]);
	}
}
