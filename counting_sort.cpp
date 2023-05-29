# include<stdio.h>
# include<stdlib.h>

int main(){
	int n, i, d, t, c=0, max=-1;
	scanf("%d",&n);
	int arr[n], sr[n];
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
		if(max < arr[i]){
			max = arr[i];
		}
	}
	int* hash = (int*)calloc(max+1,sizeof(int));
	int cmod[max+1];
	for(i=0;i<n;i++){
		(*(hash+(*(arr+i))))++;
	}
	for(i=0;i<=max;i++){
		c = c + *(hash+i);
		cmod[i] = c;
	}
	for(i=n-1;i>=0;i--){
		d = *(arr+i);
		t = --(*(cmod+d));
		sr[t] = d;
	}
	for(i=0;i<n;i++){
		printf("%d ",sr[i]);
	}
	return 0;
}
