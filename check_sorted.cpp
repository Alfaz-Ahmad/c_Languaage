# include<stdio.h>

int main(){
	int n, i, j, c;
	printf("Enter the size of array: ");
	scanf("%d",&n);
	int arr[n];
	printf("Enter the value of elements:\n");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printf("1 for Acsending order\n2 for Desending order\nEnter your choice: ");
	scanf("%d",&c);
	if(c == 1){
		for(j=0;j<n;j++){
			if(arr[j]>arr[j+1]){
				printf("NO!");
				break;
			}else if(arr[j]<=arr[j+1]){
				if(j == n-1){
					printf("YES!");
				}
			}
		}
	}else if(c == 2){
		for(j=0;j<n;j++){
			if(arr[j]<arr[j+1]){
				printf("NO!");
				break;
			}else if(arr[j]>=arr[j+1]){
				if(j == n-1){
					printf("YES!");
				}
			}
		}
	}else{
		printf("INVAILID INPUT");
	}
	
}
