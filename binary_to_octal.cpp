# include<stdio.h>
# include<math.h>

int b_to_o(int v){
	unsigned long long int i=1,d, sum = 0;
	while(v>=1){
		d = v%10;
		if(d<=1){
			sum = sum + d*pow(2,(i-1));
			i++;
			if(v/10 >= 1){
				v = v/10;
				continue;
			}else{
				return sum;
				break;
			}
		}else{
			return -1;
			break;
		}
	}
}

int main(){
	unsigned long long int n, d,sum=0, o;
	printf("Enter binary value: ");
	scanf("%llu",&n);
	int i = 1;
	while(1){
		d = n%1000;
		o = b_to_o(d);
		if(o==-1){
		 	printf(" ---> INVALID INPUT! <---");
		 	break;
		}else if (n!=0 && o>=0){
			sum = sum + o*pow(10,i-1);
		 	n = n/1000;
		 	i++;
			continue;
		}else if(n==0){
		 	printf("Coresponding Octal Value: %llu",sum);
		 	break;
		}	 
	}
}
