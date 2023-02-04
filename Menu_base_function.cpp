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

int prime(){
	int i = 1,num,mod,c=0;
	printf("Enter a number: ");
	scanf("%d",&num);
	while (i < num-1){
		mod = num%i;
		if (mod == 0){
			c++;
		}
		i++;
		
	}
	if (c==1){
		printf("YES");
	}
	else{
		printf("NO");
	}
}

int armstrong(){
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
		printf("YES");
	}else{
		printf("NO");
	}
}

int factorial(){
	int i, n, fac = 1;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		fac = fac*i;
	}
	printf("Factorial: %d",fac);
}

int sum(){
	int n,d, l, sum=0, i;
	printf("Enter a number: ");
	scanf("%d",&n);
	l = count(n);
	for(i=1;i<=l;i++){
		d = n%10;
		sum = sum + d;
		n = n/10;
	}
	printf("Sum of number: %d",sum);
}

int main(){
	int c;
	printf("1 for Check Prime\n2 for check Armstrong\n3 for Factorial\n4 for sum of digit\n\nEnter your choice: ");
	scanf("%d",&c);
	printf("\n");
	if(c == 1){
		prime();
	}else if(c == 2){
		armstrong();
	}else if(c==3){
		factorial();
	}else if(c == 4){
		sum();
	}else{
		printf("Invalid Input");
	}
}
