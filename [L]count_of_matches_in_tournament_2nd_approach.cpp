int matchCount(int n, int c){
    if(n == 1){
        return c;
    }else if(n%2 == 0){
        return matchCount(n/2, c+(n/2));
    }else{
        return matchCount(((n-1)/2)+1, ((n-1)/2)+c);
    }
}

int numberOfMatches(int n){
    return matchCount(n, 0);
}