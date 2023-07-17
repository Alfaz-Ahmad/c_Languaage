int numberOfSteps(int num){
  unsigned long long int i=1, b, n= num, c = 0, d, sum=0, l;
  if(n == 0){
    return 0;
  }
	while(n>=1){
		int t = n%2;
		sum = sum + t*pow(10,i-1);
		i++;
		n = n/2;
    if(t == 1){
      c++;
    }
	}
  l = log10(sum)+1;
  return l+(c-1);
}
