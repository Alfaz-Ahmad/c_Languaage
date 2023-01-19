# include<stdio.h>
# include<math.h>

int main(){
	unsigned long long int i=1,n,d, sum = 0;
	printf("Enter a number: ");
	scanf("%llu",&n);
	while(n>=1){
		d = n%10;
		if(d<=1){
			sum = sum + d*pow(2,(i-1));
			i++;
			if(n/10 >= 1){
				n = n/10;
				continue;
			}else{
				printf("Value: %d",sum);
				break;
			}
		}else{
			printf("INVALID INPUT!");
			break;
		}
	}
}
