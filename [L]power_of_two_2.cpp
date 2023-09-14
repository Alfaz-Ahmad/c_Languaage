bool isPowerOfTwo(int n){
  if(n <= 0){
    return false;
  }
  if(2147483648%n==0){
    return true;
  }
  return false;
}