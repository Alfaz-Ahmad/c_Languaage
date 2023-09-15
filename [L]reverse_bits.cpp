uint32_t reverseBits(uint32_t n) {
  unsigned long long int i, r = 0, m = 1, p, v;
  for(i=0;i<32;i++){
    p = (unsigned long long int)pow(2,i);
    r=r<<1;
    if(n&m){
      r+=1;
    }
    m<<=1;
  }
  return r;
}