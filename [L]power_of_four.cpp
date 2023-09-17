bool isPowerOfFour(int n){
  if(n<=0){
    return false;
  }
  if(1073741824%n==0){
    double p = sqrt(n);
    long long int i = (long long int)p;
    if(p-i==0.0){
      return true;
    }
    return false;
  }
  return false;
}