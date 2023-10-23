/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize){
  *(returnSize) = digitsSize;
  long i, s=0;
  bool b = true;
  int* r = (int*)malloc((digitsSize+1)*sizeof(int));
  for(i=digitsSize-1;i>=0;i--){
    if(*(digits+i)==9 && b){
        *(r+i+1) = 0;
    }else if(*(digits+i)!=9 && b){
        *(r+i+1) = *(digits+i)+1;
        b = false;
    }
    else{
        *(r+i+1) = *(digits+i);
    }
  }
  if(b){
      *(r+0) = 1;
      *(returnSize)+=1;
      return r;
  }
  return (r+1);
}