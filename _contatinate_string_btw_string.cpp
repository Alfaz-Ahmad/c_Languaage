# include<stdio.h>
# include<string.h>

int main(){
	int l, i, j, d, a, k;
	char ps[100], c, s[100], temp;
	gets(ps);
	fflush(stdin);
	scanf("%c", &c);
	fflush(stdin);
	gets(s);
	l = strlen(ps);
	//printf("%d\n",l);
	a = strlen(s);
	//printf("%d\n",a);
	for(i=0;i<l;i++){
		if(ps[i] == c){
			//printf("Hello");
			for(j=0;j<a;j++){
				//printf("Hello");
				ps[i+a+j] = ps[a+j];
			}
			for(k=0;k<a;k++){
				ps[i+k] = s[k];
			}
			puts(ps);
			i = i+a-1;
			l = l+a-1;
		}
	}
	puts(ps);
}
