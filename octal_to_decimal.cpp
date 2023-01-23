# include<stdio.h>
# include<math.h>

int main(){
	int i=1, v =0, n, d;
	printf("Enter Octal value: ");
	scanf("%d", &n);
	while(n!=0){
		d = n%10;
		if(d > 7){
			printf("Invalid Input!");
			break;
		}else{
			v = v + d*pow(8,i-1);
			n /= 10;
			i++;
			if(n == 0){
				printf("Value: %d",v);
				break;
			}else{
				continue;
			}	
		}
	}
}
