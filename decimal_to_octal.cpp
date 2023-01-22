# include<stdio.h>
# include<math.h>

int main(){
	int i=1, d, n, o=0;
	printf("Enter decimal value: ");
	scanf("%d",&n);
	while(n!=0){
		d = n%8;
		printf("--> %d\n",d);
		o = o + d*pow(10,i-1);
		i++;
		n /= 8;
	}
	printf("Value: %d", o);
}
