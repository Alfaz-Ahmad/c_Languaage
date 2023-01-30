# include<stdio.h>
# include<math.h>

int main(){
	int n, d, i, j=0, temp, c=0;
	scanf("%d", &n);
	int arr[n];
	for(i=0;i<=n-1;i++){
		scanf("%d",&arr[i]);
	}
	
	for(i=0;i<=n-1;i++){
		d = c;
		int k = 0;
		for(j=0;j<=n-1;j++){
			if(arr[j+1] < arr[j]){
				temp = arr[j];
				arr[j+1] = arr[j];
				arr[j] = temp;
				c++;
			}
		}
		if (k == 0){
			break;
		}
	}
	
	for(i=0;i<=n-1;i++){
		printf("%d ",arr[i]);
	}
	printf("\n%d", c);
}
