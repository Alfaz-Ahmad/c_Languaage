int getWinner(int* arr, int arrSize, int k) {
    long i, max = 0, cur = *(arr), c = 0;
    for(i=1;i<arrSize;i++){
        if(cur > *(arr+i)){
            c++;
        }else{
            c = 1;
            cur = *(arr+i);
        }
        if(k == c){
            return cur;
        }
    }
    return cur;
}