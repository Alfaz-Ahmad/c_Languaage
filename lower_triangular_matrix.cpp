# include<stdio.h>

int main(){
	int n, e, i, j, r = 1, a[100];
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			scanf("%d",&e);
			if(i<j){
				if(e>0){
					printf("%d ",e);
				}
			}
		}
	}
}
