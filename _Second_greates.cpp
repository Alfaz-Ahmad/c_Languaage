# include<stdio.h>

int main(){
	int n, m1=0, m2=-1;
	do{
		scanf("%d",&n);
		if(m1<n){
			m2 = m1;
			m1 = n;
		}
	}while(n!=-1);
	if(m2!=-1){
		printf("%d",m2);
	}else{
		printf("%d",0);
	}
}
