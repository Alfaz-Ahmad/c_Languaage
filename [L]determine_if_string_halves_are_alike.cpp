bool halvesAreAlike(char* s) {
    int mid = strlen(s)/2, i, v_count1 = 0, v_count2 = 0;
    for(i=0;i<mid;i++){
        if(*(s+i) == 'a' || *(s+i) == 'e' || *(s+i) == 'i' || *(s+i) == 'o' || *(s+i) == 'u' || *(s+i) == 'A' || *(s+i) == 'E' || *(s+i) == 'I' || *(s+i) == 'O' || *(s+i) == 'U' ){
            v_count1++;
        }
        if(*(s+i+mid) == 'a' || *(s+i+mid) == 'e' || *(s+i+mid) == 'i' || *(s+i+mid) == 'o' || *(s+i+mid) == 'u' || *(s+i+mid) == 'A' || *(s+i+mid) == 'E' || *(s+i+mid) == 'I' || *(s+i+mid) == 'O' || *(s+i+mid) == 'U'){
            v_count2++;
        }
    }
    if(v_count1 == v_count2){
        return true;
    }
    return  false;
}