# include<stdio.h>
# include<math.h>

int rev(int v, int c){
	int d;
	if(c == 0){
		return 0;
	}else{
		d = v%10;	
		return d*pow(10,c-1) + rev(v/10,c-1);
	}
}

int main(){
	int n, j, c=0;
	printf("Enter a number: ");
	scanf("%d",&n);
	int num = n;
	while(num != 0){
		c++;
		num = num/10;
	}
	j = rev(n,c);
	printf("Value: %d",j);
}
