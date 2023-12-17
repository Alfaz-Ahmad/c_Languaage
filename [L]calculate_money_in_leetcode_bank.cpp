int totalMoney(int n) {
    int i, money = 0, iterator = 1, adder;
    for(i=0;i<n;i++){
        if(i%7 == 0){
            adder = iterator;
            iterator++;
        }
        money += adder;
        adder++;
    }
    return money;
}