# include<stdio.h>
# include<stdlib.h>
# include<string.h>

bool isPalindrome(char * s){
  int i, l, k=0, j=0;
  l =strlen(s);
  for(i=0;*(s+i)!='\0';i++){
    if((*(s+i)>=65 && *(s+i)<=90) || (*(s+i)>=97 && *(s+i) <= 122)|| (*(s+i) >= 48 && *(s+i) <=57)){
      k++;
    }
  }
  if(l == 1){
    return true;
  }else if(k == 1 || k == 0){
    return true;
  }else{
    k++;
    char* s1 = (char*)malloc(k*sizeof(char));
    char* s2 = (char*)malloc(k*sizeof(char));
    for(i=0;*(s+i) != '\0'; i++){
      if((*(s+i)>=65 && *(s+i)<=90) || (*(s+i)>=97 && *(s+i) <= 122) || (*(s+i) >= 48 && *(s+i) <=57)){
        if(*(s+i) >= 65 && *(s+i) <= 90){
          *(s1+j++) = *(s+i) + 32;
          continue;
        }
        *(s1+j++) = *(s+i);
      }
    }
    k--;
    *(s1+j) = '\0';
    *(s2+k--) = '\0';
    for(i=0;*(s+i)!='\0';i++){
      if((*(s+i)>=65 && *(s+i)<=90) || (*(s+i)>=97 && *(s+i) <= 122) || (*(s+i) >= 48 && *(s+i) <=57)){
        if(*(s+i) >= 65 && *(s+i) <= 90){
          *(s2+k--) = *(s+i) + 32;
          continue;
        }
        *(s2+k--) = *(s+i);
      }
    }
    if(strcmp(s1,s2) == 0){
      return true;
    }
  }
  return false;
}

int main(){
	char s[10000];
	gets(s);
	int r = isPalindrome(s);
	printf("%s", r?"true":"false");
	return 0;
}
