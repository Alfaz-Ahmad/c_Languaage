# include<stdio.h>
# include<math.h>
# include<string.h>

int main(){
	char a[1000];
	gets(a);
	int l, i, r, o, p;
	l = strlen(a);
	for(i=0;i<l;i++){
	  	if(*(a+i) == '1'){
      		p = (pow(2,l-i-1));
      		o = o + p;
  		}
	}
	printf("%d",o-1);
	return 0;
}
