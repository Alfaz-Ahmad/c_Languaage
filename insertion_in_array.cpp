# include<stdio.h>

int main(){
	int a[100], n, k, v, i;
	printf("Enter the size of array: ");
	scanf("%d", &n);
	printf("Enter the elements of array: ");
	for(k=0;k<n;k++){
		scanf("%d",&a[k]);
	}
	printf("Enter the element to be inserted: ");
	scanf("%d",&v);
	printf("Enter the position: ");
	scanf("%d",&i);
	for(k=n-1;k>=i-1;k--){
		a[k+1] = a[k];
	}
	a[i-1] = v;
	n++;
	for(k=0;k<n;k++){
		printf("%d ",a[k]);
	}
	return 0;
}
