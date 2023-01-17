# include<stdio.h>
# include<math.h>

int main(){
	int n,sum=0,i=1,d;
	printf("Enter Decimal Value: ");
	scanf("%d",&n);
	while(n>=1){
		int t = n%2;
		sum = sum + t*pow(10,i-1);
		i++;
		n = n/2;
	}
	printf("Binary Value: %d",sum);
}
