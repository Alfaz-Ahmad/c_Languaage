# include<stdio.h>

int sum(int k){
	if (k > 0){
		int d = k%10;
		k = k/10;
		return d + sum(k);
	}
}

int main(){
	int n;
	printf("Enter a  number: ");
	scanf("%d",&n);
	int r = sum(n);
	printf("%d",r);
	return 0;
}
