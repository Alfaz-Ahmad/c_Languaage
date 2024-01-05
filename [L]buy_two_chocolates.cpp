int buyChoco(int* prices, int pricesSize, int money){
    int i, min=100, last_min=100;
    for(i=0;i<pricesSize;i++){
        if(min > *(prices+i)){
            last_min = min;
            min = *(prices+i);
        }else if(last_min > *(prices+i)){
            last_min = *(prices+i);
        }
    }
    if(min+last_min <= money){
        return money-(min+last_min);
    }
    return money;
}