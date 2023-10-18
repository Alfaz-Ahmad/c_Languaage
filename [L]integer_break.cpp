int integerBreak(int n){
    if(n == 2){
        return 1;
    }else if(n == 3){
        return 2;
    }
    else{
        int mult = 1;
        while(n != 0){
            if(n == 4){
                mult *= 4;
                n -= 4;
            }else if(n == 2){
                mult *= 2;
                n -= 2;
            }else{
                mult *= 3;
                n -= 3;
            }
        }
        return mult;
    }
    assert(false);
}