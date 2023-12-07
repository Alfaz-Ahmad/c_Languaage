int minTimeToVisitAllPoints(int** points, int pointsSize, int* pointsColSize) {
    int i, c = 0, x = *(*(points)), y = *(*(points)+1);
    for(i=1;i<pointsSize;i++){
        while(*(*(points+i))!=x || *(*(points+i)+1)!=y){
            if(*(*(points+i)) != x && *(*(points+i)+1) != y){
                if(*(*(points+i)) > x){
                    if(*(*(points+i)+1) > y){
                        x++;
                        y++;
                    }else{
                        x++;
                        y--;
                    }
                }else{
                    if(*(*(points+i)+1) > y){
                        x--;
                        y++;
                    }else{
                        x--;
                        y--;
                    }
                }
            }else{
                if(*(*(points+i)) == x){
                    if(*(*(points+i)+1) > y){
                        y++;
                    }else{                    
                        y--;
                    }
                }else{
                    if(*(*(points+i)) > x){
                        x++;
                    }else{                    
                        x--;
                    }
                }
            }        
            c++;
        }
    }
    return c;
}