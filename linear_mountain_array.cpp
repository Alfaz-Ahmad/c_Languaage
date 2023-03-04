# include<stdio.h>



int main(){
	int i, n, ar[] = {10,20,30,40,50,34,23,12,6};
	n = 9;
	for(i=0;i<n;i++){
		if(ar[i]>ar[i+1]){
			printf("%d",i);
			break;
		}
	}
}
