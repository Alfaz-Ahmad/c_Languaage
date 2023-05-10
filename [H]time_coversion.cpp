# include<stdio.h>
# include<string>
# include<stdlib.h>

char* timeConversion(char* s) {
    int i, sum=0;
    if(*(s+8)=='A'){
        for(i=0;i<2;i++){
            sum += *(s+i)-48;
        }
        printf("%d",sum);
        if(sum == 12){
            for(i=0;i<2;i++){
                *(s+i) = '0';
            }
        }
    }
    else if(*(s+8) == 'P'){
        for(i=0;i<2;i++){
            sum += *(s+i)-48;
        }
        sum += 12;
        for(i=1;i>=0;i--){
            *(s+i) = sum%10 + 48;
            sum /= 10;
        }
    }
    *(s+8) = '\0';
    return s;
}


int main(){
	char* str = (char*)malloc(10*sizeof(char));
	scanf("%s",&str);
	str = timeConversion(str);
	printf("%s",str);
	return 0;
}
