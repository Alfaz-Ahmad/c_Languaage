# include<stdio.h>

int main(){
	int n, i, temp, f, l, arr[1000];
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%d", &arr[i]);
	}
	l = n-1;
	for(i=0; i<n; i++){
		if(i>=l){
			break;
		}else{
			temp = arr[i];
			arr[i] = arr[l];
			arr[l] = temp;
			l--;
		}
	}
	for(i=0; i<n; i++){
		printf("%d ", arr[i]);
	}
}
