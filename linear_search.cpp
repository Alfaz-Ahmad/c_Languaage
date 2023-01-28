# include<stdio.h>
# include<math.h>

int main(){
	int n,i,c=0,num;
	//printf("Enter the total number: ");
	scanf("%d",&n);
	int arr[n];
	for(i=1;i<=n;i++){
		scanf("%d",&arr[i-1]);
	}
	scanf("%d",&num);
	
	for(i=0;i<=n-1;i++){
		if(arr[i] == num){
			printf("%d",i);
			break;
		}else if(i==n-1){
			printf("Key does not exist" );
		}
	}
}
