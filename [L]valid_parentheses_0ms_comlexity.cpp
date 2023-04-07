#include <stdio.h>
#include <string.h>
#include <stdlib.h>

bool isValid(char * s){
    int i;
    for(i=0;*(s+i)!='\0';i++){
        ;
    }
    //printf("%d", i);
    if((i-1)%2!=0){
        return false;
    }
    int k=0;
    int* sq = (int*)calloc(i-1,sizeof(int)); 
    for(i=0;*(s+i)!='\0';i++){
        if(*(s+i) == '(' || *(s+i) == ')'){
            if(*(s+i) == '('){
                sq[k++] = 1;
            }else{
                if(k==0 && sq[k-1] != 1){
                    return false;
                }if(k!= 0){
                    sq[--k] -= 1;
                }else{
                    return false;
                }
            }
        }if(*(s+i) == '{' || *(s+i) == '}'){
            if(*(s+i) == '{'){
                sq[k++] = 2;
            }else{
                if(k==0 && sq[k-1] != 2){
                    return false;
                }if(k!=0){
                    sq[--k] -= 2;
                }else{
                    return false;
                }
            }
        }else if(*(s+i) == '[' || *(s+i) == ']'){
            if(*(s+i) == '['){
                sq[k++] = 3;
            }else{
                if(k==0 && sq[k-1] != 3 ){
                    return false;
                }if(k!=0){
                 sq[--k] -= 3;
                }else{
                    return false;
                }
                 
            }
        }else{
            continue;
        }
    }
    for(k=0;k<i-1;k++){
        if(sq[k] != 0){
            return false;
        }
    }
    return true;
}

int main(){
	char str[1000];
    fgets(str,1000,stdin);
    printf("%s", isValid(str) ? "true":"false");
}
