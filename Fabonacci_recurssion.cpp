# include <stdio.h>

int fab(int k){
	if (k == 1){
		return 0;
	}else if(k == 2){
		return 1;
	}else{
		return fab(k-1)+fab(k-2);
	}
}

int main(){
	int n, i;
	printf("Enter a number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("%d ", fab(i));
	}
	return 0;
}
