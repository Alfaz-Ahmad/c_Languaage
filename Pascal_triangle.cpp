# include <stdio.h>

int fac(int k){
	long int i=1,fac=1;
	for(i=1;i<=k;i++){
		fac *= i;
	}
	return fac;
}

int main(){
	int n, fa, r, fr,f, i, j,k;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(i=1;i <= n;i++){
		for(j=1; n-j >= i; j++){
			printf(" ");
		}
		for(j=1; j<=i;j++){
			k = 1,fa=1,r=1,fr=1,f=1;
			if(j==1||j==i||i==1){
				f = 1;
				printf("%d ",f);
			}else{
				fa = fac(i-1);
				r = fac(j-1);
				fr = fac(i-j);
				f = (fa/(r*fr));
				printf("%d ",f);
			}
				
		}
			printf("\n");
	}
}
