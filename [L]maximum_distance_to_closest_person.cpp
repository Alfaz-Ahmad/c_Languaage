int maxDistToClosest(int* seats, int seatsSize){
    int i=0, j = 0, min = 0;
    bool ex = true;
    while(i<seatsSize && j<seatsSize){
        if(*(seats+i) == 1){
            if(j == 0 && *(seats+j)==0){
                if(min < i-j){
                    min = i-j;
                }
            }else if(min < (int)(i-j)/2){
                min = (int)(i-j)/2;
            }
            j = i;
        }else if(i == seatsSize-1){
            if(min < i-j){
                min = i-j;
            }
        }
        i++;
    }
    return min;
}