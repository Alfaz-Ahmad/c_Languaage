# include<stdio.h>
# include<stdlib.h>
# include<math.h>

void plusOne(int* digits, int digitsSize, int* returnSize, int* digit){
  int i;
  long long int k =0, p, d;
  for(i=digitsSize-1;i>=0;i--){
    p = pow(10,digitsSize-i-1);
    k += (*(digits+i))*p;
  }
  k++;
  *(returnSize) = 0;
  d = k;
  while(d!=0){
    (*(returnSize))++;
    d /= 10;
  }
  printf(">>>hello");
  digit = (int*)realloc(digit,*(returnSize));
  printf(">>>hey");
  i = (*(returnSize))-1;
  for(i=0;i<*(returnSize);i++){
    p = pow(10,(*(returnSize))-i-1);
    d = k/p;
    *(digit+i) = d%10; 
  }
}

int main(){
	int n, i;
	scanf("%d",&n);
	int* arr = (int*)malloc(n*sizeof(int));
	for(i=0;i<n;i++){
		scanf("%d",(arr+i));
	}
	int* rs;
	printf("Hello");
	int* rarr =  (int*)malloc(n*sizeof(int));
	plusOne(arr, n, rs, rarr);
	printf("hey");
	printf("[");
	for(i=0;i<*(rs);i++){
		printf("%d",*(rarr+i));
	}
	printf("]");
	return 0;
	
}
