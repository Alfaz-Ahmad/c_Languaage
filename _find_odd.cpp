# include<stdio.h>

void find_odd(int k){
	int n, c=0;
	do{
		scanf("%d",&n);
		if(n%2 == 1|| n%2 == -1){
			c++;
			if(c==k){
				printf("%d",n);
			}
		}
	}while(n!=-1);	
}

int main(){
	int k;
	scanf("%d",&k);
	find_odd(k);
}
