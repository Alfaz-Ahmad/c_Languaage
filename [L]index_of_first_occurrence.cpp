# include<stdio.h>
# include<string.h>

int strStr(char * haystack, char * needle){
    int i, j, k;
    for(i=0;*(haystack+i) != '\0';i++){
        k = 0;
        if(*(haystack+i) == *(needle+k)){
            for(j=0;*(needle+j)!='\0';j++){
                if(*(haystack+i+j) == '\0'){
                    return -1;
                }
                if(*(haystack+i+j) == *(needle+j)){
                    k++;
                }
            }if(k==j){
                return i;
            }
        }
    }
    return -1;
}

int main(){
	char s1[1000], s2[1000];
	scanf("%s", s1);
	scanf("%s", s2);
	printf("%d", strStr(s1, s2));
	return 0;
}
