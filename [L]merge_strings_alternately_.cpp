# include<stdio.h>
# include<stdlib.h>
# include<string.h>

char * mergeAlternately(char * word1, char * word2){
  int i=0, l1, l2, j=0, k=0;
  char* rarr = (char*)malloc((strlen(word1)+strlen(word2)+1)*sizeof(char));
  while(i<strlen(word1) && j<strlen(word2)){
      rarr[k++] = *(word1+i);
      rarr[k++] = *(word2+j);
      i++;
      j++;
  }
  while(i<strlen(word1)){
    rarr[k++] = *(word1+i);
    i++;
  }while(j<strlen(word2)){
    rarr[k++] = *(word2+j);
    j++;
  }
  *(rarr+k) = '\0';
  return rarr;
}

int main(){
	char s1[1000], s2[1000];
	char* p;
	gets(s1);
	gets(s2);
	p = mergeAlternately(s1, s2);
	printf("%s",p);
}
