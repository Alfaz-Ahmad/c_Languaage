# include<stdio.h>
# include<math.h>

int len(int v){
	int c = 0;
	while(v!=0){
		v = v/10;
		c++;
	}
	return c;
}

int rev(int n){
	int d, l, p; 
	d = n%10;
	l = len(n);
	if(l == 1){
		return d;
    }else{
    	p = pow(10,l-1);
    	return d*p + rev(n/10);
	}
}

int main(){
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	printf("%d",rev(n));
}
