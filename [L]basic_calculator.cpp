char* removeSpace(char* s){
    int slow=0, fast=0;
    while(*(s+fast) != '\0'){
        if(*(s+fast) != ' '){
            *(s+slow++) = *(s+fast);
        }
        fast++;
    }
    if(slow == strlen(s)){
        s = (char*)realloc(s, (strlen(s)+2)*sizeof(char));
    }
    *(s+slow++) =  ')';
    *(s+slow) = '\0';
    return s;
}

int token(char* s, int* i){
    int sum = 0, j = *(i);
    while(*(s+j)>=48 && *(s+j)<=57){
        sum = sum * 10 + (*(s+j) - 48);
        j++;
    }
    *(i) = j;
    return sum;
}

int calc(char* s, int* i){
    int j = *(i), temp;
    long sum = 0;
    if(j<strlen(s) && *(s+j) >= 48 && *(s+j)<=57){
        sum += token(s, i);        
    }else if(j<strlen(s) && *(s+j) == '('){
        *(i) = j+1;
        sum = calc(s, i);
    }
    j= *(i);
    while(j<strlen(s) && *(s+j)!=')'){
        if(*(s+j) =='+' || *(s+j)=='-'){        
            if(*(s+j+1)>=48 && *(s+j+1)<=57){
                *(i) = j+1;
                temp = token(s, i);                
            }else if(*(s+j+1)=='('){            
                *(i) = j+2;
                temp = calc(s,i);                
            }
        }
        if(*(s+j) == '-'){
            sum -= temp;
        }else{
            sum += temp;
        }
        j = *(i);
    }
    *(i) = j+1;
    return sum;
}

int calculate(char* s) {
    int i = 0, j;
    s = removeSpace(s);
    return calc(s, &i);
}