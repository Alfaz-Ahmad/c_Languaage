int reverse(int x){
  int d;
  unsigned long long sum = 0;
  long int n = x;
  bool s = false;
  if(x < 0){
      s = true;
      n = n*-1;
  }
  while(n!=0){
      sum *= 10;
      d = n%10;
      sum += d;
      if(!s && sum >= 2147483647){
          return 0;
      }else if(s && sum >= 2147483648){
          return 0;
      }
      n = n/10;
  }
  if(s){
      return -1*sum;
  }
  return sum;
}