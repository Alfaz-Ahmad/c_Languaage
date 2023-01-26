# include<stdio.h>
# include<math.h>

int gcd(int v1, int v2){
	int d = v1%v2;
	if (d == 0){
		return v2;
	}else if(d>1){
		gcd(v2,d);
	}else{
		return 1;
	}
}

int main(){
	int t, i, n1, n2;
	scanf("%d", &t);
	for(i=1;i<=t;i++){
		//printf("Enter two number: ");
		scanf("%d %d", &n1, &n2);
		printf("%d",gcd(n1,n2));
	}
	return 0;
}
