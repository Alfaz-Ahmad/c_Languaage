char* removeSpace(char* s){
    int slow=0, fast=0;
    while(*(s+fast) != '\0'){
        if(*(s+fast) != ' '){
            *(s+slow++) = *(s+fast);
        }
        fast++;
    }
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

int calc(char* s){
    int* oper = (int*)malloc((1+strlen(s)/2)*sizeof(int));
    char* opra = (char*)malloc((strlen(s)/2)*sizeof(char));
    int i = 0, j = 0, p=0, val, it;
    while(p < strlen(s)){
        if(*(s+p)>=48 && *(s+p)<=57){
            *(oper+i++) = token(s, &p);
        }else{
            if(*(s+p)=='/' || *(s+p) == '*'){
                it = p+1;
                val = token(s, &it);
                i = i-1;
                if(*(s+p)=='/'){
                    *(oper+i) = *(oper+i) / val;
                }else{
                    *(oper+i) = *(oper+i) * val;
                }
                i++;
                p = it;
            }else{
                *(opra+j++) = *(s+p++);
            }
        }
    }
    int sum = *(oper);
    p = 1;
    for(i=0;i<j;i++){
        if(*(opra+i) == '+'){
            sum += *(oper+p++);
        }else{
            sum -= *(oper+p++);
        }
    }
    return sum;
}

int calculate(char* s) {
    s = removeSpace(s);
    return calc(s);
}