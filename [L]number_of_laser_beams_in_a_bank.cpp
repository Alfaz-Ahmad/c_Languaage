int numberOfBeams(char** bank, int bankSize) {
    int i, j, one_cnt, prev = 0, rtn_cnt = 0;
    for (i = 0; i < bankSize; i++) {
        one_cnt = 0;
        for (j = 0; j < strlen(*(bank + i)); j++) {
            if (*(*(bank + i) + j) == '1') {
                one_cnt++;
            }
        }
        if(one_cnt){
            rtn_cnt += one_cnt*prev;
            prev = one_cnt;
        }
    }
    return rtn_cnt;
}