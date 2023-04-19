# include<stdio.h>
# include<string.h>
# include<stdlib.h>
# include<math.h>

char * addBinary(char * a, char * b){
  int i, l1, l2;
  unsigned long long int o1=0, o2=0, r, p;
  l1 = strlen(a);
  l2 = strlen(b);
  for(i=l1-1;i>=0;i--){
    if(*(a+i) == '1'){
      p = (pow(2,l1-i-1));
      o1 = o1 + p;
    }
  }for(i=l2-1;i>=0;i--){
    if(*(b+i) == '1'){
      p = (pow(2,l2-i-1));
      o2 = o2 + p;
    }
  }
  r = o1 + o2;
  for(i=0;;i++){
    p = pow(2,i);
    if(p>r && i!=0){
      i--;
      break;
    }else if(p>r && i==0){
      break;
    }
  }
  char* rb = (char*)calloc(i+2,sizeof(char));
  *(rb+i+1) = '\0';
  for(i;i>=0;i--){
    if(r%2 == 1){
      *(rb+i) = '1';
    }else{
      *(rb+i) = '0';
    }
    r /= 2;
  }
  return rb;
}

int main(){
	char s1[1000], s2[1000];
	gets(s1);
	gets(s2);
	char* ra = addBinary(s1, s2);
	printf("Addition of given 2 strings of binary number: ");
	printf("%s",ra);
	return 0;
}
