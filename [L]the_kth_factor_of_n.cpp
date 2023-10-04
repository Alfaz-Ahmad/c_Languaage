int kthFactor(int n, int k){
    int iteration, counter = 0;
    for(iteration=1;iteration<=n;iteration++){
        if(n%iteration==0){
            counter++;
        }
        if(k==counter){
            return iteration;
        }
    }
    return -1;
}