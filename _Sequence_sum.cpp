# include <stdio.h>

int main(){
	int n=-1, t, c = 0;
	float s;
	do{
		t = n;
		scanf("%d",&n);
		if(t != -1 && n != -1){
			s = (float)(n+t)/2;
			if(c == 1){
				printf("%.1f",s);	
			}else{
				printf(" %.1f",s);
			}
			
		}
		c++;
	}while(n!=-1);
}
