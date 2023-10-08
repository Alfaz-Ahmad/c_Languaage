int bestClosingTime(char * customers){
    int i, penality=0, min_penality = strlen(customers), hour;
    for(i=0;i<strlen(customers);i++){
        if(*(customers+i) == 'Y'){
            penality++;
        }
    }
    if(penality == strlen(customers)){
        return strlen(customers);
    }else if(penality == 0){
        return 0;
    }
    for(i=0;i<strlen(customers);i++){
        if(penality < min_penality){
            min_penality = penality;
            hour = i;
        }
        if(*(customers+i) == 'Y'){
            penality--;
        }else if(*(customers+i) == 'N'){
            penality++;
        }
    }
    if(penality < min_penality){
        min_penality = penality;
        hour = i;
    }   
    return hour;
}