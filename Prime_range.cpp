# include <stdio.h>

int main(){
	int lr, up, num, c, i, j;
	printf("Enter lower range: ");
	scanf("%d",&lr);
	printf("Enter upper range: ");
	scanf("%d",&up);
	for(i=lr;i<=(up);i++){
		c=0;
		for(j=1;j<=(i/2)+1;j++){
			num = i%j;
			if(num == 0){
				c++;
			}
		}
		if(c==1){
			printf("\n%d is prime.",i);
		}
	}
	return 0;
}
