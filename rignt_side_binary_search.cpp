# include<stdio.h>
# include<stdlib.h>

int main(){
	int n, i, arr[1000], m, l, u, t;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	scanf("%d",&t);
	l=0, u=n;
	while(l<=u){
		m = (l+u)/2;
		if(arr[m]==t && arr[m+1]!=t){
			printf("%d",m);
			return 0;
		}else if(arr[m]==t && arr[m+1] == t){
			l++;
		}else if(arr[m] > t){
			u = m-1;
		}else{
			l = m+1;
		}
	}
	printf("Key not exist.");
	return 0;
}
