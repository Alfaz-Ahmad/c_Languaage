# include<stdio.h>
# include<stdlib.h>

void leader(int* arr, int n){
	int i, j;
	for(i=0;i<n;i++){
		for(j=n-1;j>=i;j--){
			if(*(arr+i) < *(arr+j)){
				break;
			}if(i == j){
				printf("%d\n", *(arr+i));
			}
		}
	}
}

int main(){
	int i, n;
	scanf("%d",&n);
	int* arr = (int*)calloc(n,sizeof(int));
	for(i=0;i<n;i++){
		scanf("%d",(arr+i));
	}
	leader(arr, n);
	return 0;
}
