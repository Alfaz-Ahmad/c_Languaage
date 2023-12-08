int minTimeToVisitAllPoints(int** points, int pointsSize, int* pointsColSize) {
    int i, x = *(*(points)), y = *(*(points)+1), c = 0;
    for(i=1;i<pointsSize;i++){
        if(abs(*(*(points+i)) - x) > abs(*(*(points+i)+1) - y)){
            c += abs(*(*(points+i)) - x);
        }else{
            c += abs(*(*(points+i)+1) - y);
        }
        x = *(*(points+i));
        y = *(*(points+i)+1);
    }
    return c;
}