# include<stdio.h>
# include<math.h>

int o_to_b(int v){
	int sum=0,i=1,d;
	while(v>=1){
		int t = v%2;
		sum = sum + t*pow(10,i-1);
		i++;
		v = v/2;
	}
	return sum;
}

int main(){
	unsigned long long int n,sum=0,i=1,d;
	printf("Enter octal number: ");
	scanf("%llu",&n);
	while(n>=1){
		d = n%10;
		if(d>=0 && d<=7){
			int o = o_to_b(d);
			sum = sum + o*pow(1000,(i-1));
			if (n/10 >= 1){
				n = n/10;
				i++;
				continue;
			}else{
				printf("Value: %llu",sum);
				break;
			}
		}
		else{
			printf("INVALID INPUT!");
			break;
		}
	}
}
