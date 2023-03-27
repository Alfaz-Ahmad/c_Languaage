# include<stdio.h>

int isprime(int n){
	int c=0, r, i=1;
	while(i <= n){
		if (n%i == 0){
			c++;
		}
		i++;
	}
	if (c==2){
		r = 1;
	}else{
		r = 0;
	}
	return r;
}

int main(){
	int n, num = 0, d, sum;
	printf("Enter a number: ");
	scanf("%d", &n);
	int i = n;
	while (1 <= i){
		d = isprime(i);
		//printf(">>>%d %d\n",d,i);
		if (d == 1){
			int j = i;
			while (1 <= j){
				int r = isprime(j);
				//printf("\n");
				//printf("%d %d\n",r,j);
				if (r == 1){
					sum = i + j;
					if (sum == n){
						num += 1;
						printf("%d=%d+%d\n",n,j,i);
					}
				}
				j--;
			}
		}
		i--;
	}
	if(num == 0){
		printf("NOT POSSIBLE");
	}
}
