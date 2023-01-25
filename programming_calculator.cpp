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

int decimalOctal(){
	int i=1, d, n, o=0;
	printf("Enter decimal value: ");
	scanf("%d",&n);
	while(n!=0){
		d = n%8;
		o = o + d*pow(10,i-1);
		i++;
		n /= 8;
	}
	printf("Value: %d", o);
}

int octalDecimal(){
	int i=1, v =0, n, d;
	printf("Enter Octal value: ");
	scanf("%d", &n);
	while(n!=0){
		d = n%10;
		if(d > 7){
			printf("INVAILID INPUT!");
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

int binaryDecimal(){
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

int binaryOctal(){
	unsigned long long int n, d,sum=0, o;
	printf("Enter binary value: ");
	scanf("%llu",&n);
	int i = 1;
	while(1){
		d = n%1000;
		o = b_to_o(d);
		if(o==-1){
		 	printf("INVALID INPUT!");
		 	break;
		}else if (n!=0 && o>=0){
			sum = sum + o*pow(10,i-1);
		 	n = n/1000;
		 	i++;
			continue;
		}else if(n==0){
		 	printf("Value: %llu",sum);
		 	break;
		}	 
	}
}

int decimalBinary(){
	int n,sum=0,i=1,d;
	printf("Enter Decimal Value: ");
	scanf("%d",&n);
	while(n>=1){
		int t = n%2;
		sum = sum + t*pow(10,i-1);
		i++;
		n = n/2;
	}
	printf("Value: %d",sum);
}

int octalBinary(){
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

int main(){
	int n;
	printf("\t\tPROGRAMMING CALCULATOR\n");
	printf(" Press 1 for Decimal to Binary\n");
	printf(" Press 2 for Decimal to Octal\n");
	printf(" Press 3 for Octal to Binary\n");
	printf(" Press 4 for Octal to Decimal\n");
	printf(" Press 5 for Binary to Decimal\n");
	printf(" Press 6 for Binary to Octal\n");
	printf(" Enter Your Choice: ");
	scanf("%d",&n);
	switch(n){
		case 1:
			decimalBinary();
			break;
		case 2:
			decimalOctal();
			break;
		case 3:
			octalBinary();
			break;
		case 4:
			octalDecimal();
			break;
		case 5:
			binaryDecimal();
			break;
		case 6:
			binaryOctal();
			break;
		default:
			printf("INVALID INPUT!");
	}	
}
