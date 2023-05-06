#include<stdio.h>
#include<stdlib.h>

bool isAnagram(char * s, char * t){
  int i, d;
  int* hash = (int*)calloc(26,sizeof(int));
  for(i=0;*(s+i)!='\0';i++){
    (*(hash+((*(s+i)-97))))++;
  }
  for(i=0;*(t+i)!='\0';i++){
    d = *(t+i);
    if(*(hash+(*(t+i)-97)) == 0){
      return false;
    }else{
      (*(hash+(*(t+i)-97)))--;
    }
  }
  for(i=0;i<25;i++){
    if(*(hash+i) != 0){
      return false;
    }
  }
  return true;
}

int main(){
	int i;
	char s[10000], t[10000];
	gets(s);
	gets(t);
	printf("%s",isAnagram(s, t)?"true":"false");
	return 0;
}
