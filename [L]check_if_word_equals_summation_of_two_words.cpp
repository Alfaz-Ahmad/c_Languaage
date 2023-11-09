bool isSumEqual(char* firstWord, char* secondWord, char* targetWord) {
    long long int i, num1=0, num2=0, num3=0, d;
    for(i=strlen(firstWord)-1;i>=0;i--){
        d = *(firstWord+i)-97;
        num1+=d*pow(10,strlen(firstWord)-1-i);
    }
    for(i=strlen(secondWord)-1;i>=0;i--){
        d = *(secondWord+i)-97;
        num2+=d*pow(10,strlen(secondWord)-1-i);
    }
    for(i=strlen(targetWord)-1;i>=0;i--){
        d = *(targetWord+i)-97;
        num3+=d*pow(10,strlen(targetWord)-1-i);
    }
    if(num1+num2 == num3){
        return true;
    }
    return false;
}