# include<stdio.h>

void reverseString(char* s, int sSize){
  int i, r;
  for(i=0;i<sSize/2;i++){
    *(s+i) = *(s+i)+*(s+(sSize-(i+1)));
    *(s+(sSize-(i+1))) = *(s+i) - *(s+(sSize-(i+1)));
    *(s+i) = *(s+i) - *(s+(sSize-(i+1)));
  }
}

int main(){
	int n, i;
	scanf("%d",&n);
	char arr[n];
	for(i=0;i<n;i++){
		scanf("%c",&arr[i]);
	}
	reverseString(arr, n);
	for(i=0;i<n;i++){
		printf("%c",arr[i]);
	}
	return 0;
}
