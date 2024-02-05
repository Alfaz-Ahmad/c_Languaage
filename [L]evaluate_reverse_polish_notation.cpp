int generate(char* str){
    if(*(str) == '-'){
        return -1*generate((str+1));
    }else{
        int i, val = 0;
        for(i=0;i<strlen(str);i++){
            val *= 10;
            val += (*(str+i) - 48);
        }
        return val;
    }
}

int evalRPN(char** tokens, int tokensSize) {
    int i, top = -1, operand1, operand2, val;
    long long* stack = (long long*)malloc(tokensSize*sizeof(long long));
    for(i=0;i<tokensSize;i++){
        if(!(*(*(tokens+i)) == '+' || (*(*(tokens+i)) == '-' && strlen(*(tokens+i)) == 1) || *(*(tokens+i)) == '*' || *(*(tokens+i)) == '/')){
            val = generate((*(tokens+i)));
            top++;
            *(stack+top) = val;
        }else{
            operand2 = *(stack+top);
            top--;
            operand1 = *(stack+top);
            if(*(*(tokens+i)) == '+'){
                *(stack+top) = operand1 + operand2;
            }else if(*(*(tokens+i)) == '-'){
                *(stack+top) = operand1 - operand2;
            }else if(*(*(tokens+i)) == '*'){
                *(stack+top) = operand1 * operand2;
            }else{
                *(stack+top) = floor(operand1 / operand2);
            }
        }
    }
    return *(stack);
}