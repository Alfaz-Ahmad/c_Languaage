// Armstronge Number
# include<stdio.h>
# include<math.h>

int count(int n){
	int c = 0;
	while(n!=0){
		n = n/10;
		c++;
	}
	return c;
}

int main(){
	int n, d,arm,i,sum=0;
	printf("Enter a number: ");
	scanf("%d", &n);
	arm = n;
	int l = count(n);
	for(i=1;i<=l;i++){
		d = n%10;
		n = n/10;
		sum = sum + pow(d,l);	
	}
	if (sum == arm){
		printf("YES!");
	}else{
		printf("NO!");
	}
}
