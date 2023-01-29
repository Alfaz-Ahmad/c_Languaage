# include<stdio.h>
# include<math.h>

int main(){
	int n,i,c=0,num;
	printf("Enter the total number: ");
	scanf("%d",&n);
	int arr[n];
	for(i=1;i<=n;i++){
		scanf("%d",&arr[i-1]);
	}
	printf("Enter the set of numbers: ");
	scanf("%d",&num);
	for(i=0;i<n-1;i++){
		if(arr[i] < arr[i+1]){
			c++;
		}
	}
	int h = n-1;
	int l = 0;
	if(c == n-1){
		int m = (h+l)/2;
		for(i=0;i<=(n/2);i++){
			if(arr[m] == num){
				printf("%d",m);
				break;
			}else if(i==(n/2)){
				printf("Key does not exist" );
			}else if(arr[m] > num){
				m--;
			}else{
				m++;
			}
		}
	}else{
		printf("Binary search could not be implemented");
	}
}
