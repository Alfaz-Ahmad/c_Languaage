int search(char* arr, int l, int h, char target){
    int m = (l+h)/2, t = target-48;
    if(*(arr+m)-48 > t && (l==h || *(arr+m-1)-48 <= t)){
        return m;
    }else if(h == l){
        return -1;
    }else if(t >= *(arr+m)-48){
        return search(arr, m+1, h, target);
    }else{
        return search(arr, l, m-1, target);
    }
}

// char search2(char* arr, int l, int h, char target){
//     int m =(l+h)/2, t = target-48;
//     if(*(arr+m)-48 < t && (l==h || *(arr+m+1)))
// }

char nextGreatestLetter(char* letters, int lettersSize, char target){
    if(*(letters) > target){
        return *(letters);
    }
    int m = search(letters, 0, lettersSize-1, target);
    if(m == -1){
        return *(letters);
    }
    return *(letters+m);
}