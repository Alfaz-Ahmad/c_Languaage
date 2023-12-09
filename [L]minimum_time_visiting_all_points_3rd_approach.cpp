int minTimeToVisitAllPoints(int** points, int pointsSize, int* pointsColSize) {
    int i, c = 0;
    for(i=1;i<pointsSize;i++){
        if(abs(*(*(points+i)) - *(*(points+i-1))) > abs(*(*(points+i)+1) - *(*(points+i-1)+1))){
            c += abs(*(*(points+i)) - *(*(points+i-1)));
        }else{
            c += abs(*(*(points+i)+1) - *(*(points+i-1)+1));
        }
    }
    return c;
}