int climbStairs(int n){
  int i, sum, a=0, b=1;
  if(n == 1){
    return 1;
  }else{
    for(i=1;i<=n;i++){
      sum = a + b;
      a = b;
      b = sum;
    }
  }
  return sum;
}
