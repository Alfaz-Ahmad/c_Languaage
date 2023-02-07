# include<stdio.h>

int main(){
	int a[100], n, k, v, i;
	printf("Enter the size of array: ");
	scanf("%d", &n);
	printf("Enter the elements of array: ");
	for(k=0;k<n;k++){
		scanf("%d",&a[k]);
	}
	printf("Enter the position: ");
	scanf("%d",&i);
	for(k=i-1;k<n;k++){
		a[k] = a[k+1];
	}
	n--;
	for(k=0;k<n;k++){
		printf("%d ",a[k]);
	}
	return 0;
}
