# include<stdio.h>

int main(){
	int t, n100, n10, n1, p;
	scanf("%d %d %d %d",&n100,&n10,&n1,&p);
	t = 100*n100 + n10*10 + n1;
	if(p<=t){
		printf("%d",1);
	}else{
		printf("%d",0);
	}
}
