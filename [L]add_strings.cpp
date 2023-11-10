char* addStrings(char* num1, char* num2) {
    int i, j, max=strlen(num1);
    bool c = false;
    if(max < strlen(num2)){
        max = strlen(num2);
    }
    max++;
    int l = max-1;
    char* r = (char*)malloc(max*sizeof(int));
    *(r+max) = '\0';
    int l1 = strlen(num1)-1, l2 = strlen(num2)-1;
    while(l1>=0 || l2>=0){
        if(l1 <= -1){
            if(c == true){
                if((*(num2+l2)-48)+1 > 9){
                    *(r+l--) = '0';
                    l2--;
                }else{
                    *(r+l--) = ((*(num2+l2)-48)+1)+48;
                    c = false;
                    l2--;
                }
            }else{
                *(r+l--) = *(num2+l2);
                l2--;
            }
        }else if(l2 <= -1){
            if(c == true){
                if((*(num1+l1)-48)+1 > 9){
                    *(r+l--) = '0';
                    l1--;
                }else{
                    *(r+l--) = ((*(num1+l1)-48)+1)+48;
                    c = false;
                    l1--;
                }
            }else{
                *(r+l--) = *(num1+l1);
                l1--;
            }
        }else{
            if(c == true){
                if((*(num1+l1)-48)+(*(num2+l2)-48)+1>9){
                    *(r+l--) = (((*(num1+l1)-48)+(*(num2+l2)-48)+1)%10)+48;
                    l2--;
                    l1--;
                }else{
                    *(r+l--) = ((*(num1+l1)-48)+(*(num2+l2)-48)+1)+48;
                    l2--;
                    l1--;
                    c = false;
                }
            }else{
                if((*(num1+l1)-48)+(*(num2+l2)-48)>9){
                    *(r+l--) = (((*(num1+l1)-48)+(*(num2+l2)-48))%10)+48;
                    c = true;
                    l2--;
                    l1--;
                }else{
                    *(r+l--) = ((*(num1+l1)-48)+(*(num2+l2)-48))+48;
                    l2--;
                    l1--;
                }
            }
        }
    }
    if(c == true){
        *(r+0) = '1';
        return r; 
    }
    return (r+1);
}