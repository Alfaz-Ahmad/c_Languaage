char * multiply(char * num1, char * num2){
    int i, j, c = 0, d, m, mul, l=(strlen(num1)+strlen(num2))-1, k;
    if((strlen(num1) == 1 && *(num1) == '0') || (strlen(num2) == 1 && *(num2) == '0')){
        char* r = (char*)malloc(2*sizeof(int));
        *(r) = '0';
        *(r+1) = '\0';
        return r;
    }else if(strlen(num1)==1&&*(num1)=='1'){
        return num2;
    }else if(strlen(num2)==1 && *(num2)=='1'){
        return num1;
    }
    int* arr = (int*)calloc(strlen(num1)+strlen(num2),sizeof(int));
    for(i=strlen(num1)-1;i>=0;i--){
        d = *(num1+i)-48;
        k = 0;
        for(j=strlen(num2)-1;j>=0;j--){
            m = *(num2+j)-48;
            mul = (m*d);
            if(*(arr+l-k)+mul >= 10){
                *(arr+l-k) += mul%10;
                mul /= 10;
                *(arr+l-k-1) += mul%10;
            }
            else if(*(arr+l-k)+mul <= 9){
                *(arr+l-k) += mul;
            }
            else{
                assert(false);
            }
            k++;
        }
        l--;
    }
    char* r = (char*)malloc((strlen(num1)+strlen(num2)+1)*sizeof(char));
    *(r + (strlen(num1)+strlen(num2))) = '\0';
    for(i=(strlen(num1)+strlen(num2))-1;i>=0;i--){
        m = (c+*(arr+i));
        d = m%10;
        *(r+i) = d+48;
        m /=10;
        c = m;
    }
    for(i=0;i<(strlen(num1)+strlen(num2));i++){
        if(*(r+i)!='0'){
            return (r+i);
        }
    }
    assert(false);
}