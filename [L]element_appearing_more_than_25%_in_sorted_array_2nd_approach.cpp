int findSpecialInteger(int* arr, int arrSize) {
    int threshold = (arrSize*25)/100;
    int max = 0, i;
    for(i=0;i<arrSize;i++){
        if(max < *(arr+i)){
            max = *(arr+i);
        }
    }
    int* hash = (int*)calloc(max+1, sizeof(int));
    for(i=0;i<arrSize;i++){
        (*(hash+*(arr+i)))++;
        if(*(hash+*(arr+i)) > threshold){
            return *(arr+i);
        }
    }
    assert(false);
}