/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize){
  long i, s=0;
  bool b = true;
  if(*(digits+digitsSize-1)<9){
    (*(digits+digitsSize-1))+=1;
    *(returnSize) = digitsSize;
    return digits;
  }
  int* r = (int*)malloc((digitsSize+1)*sizeof(int));
  for(i=digitsSize-1;i>=0;i--){
    if(*(digits+i)==9 && b){
      *(r+i+1) = 0;
    }
    else if(*(digits+i)<9 && b){
      b = false;
      *(r+i+1) = (*(digits+i))+1;
      if(i==0){
        *(returnSize) = digitsSize;
        return (r+1);
      }
    }
    else{
      *(r+i+1) = *(digits+i);
      if(i==0){
        *(returnSize) = digitsSize;
        return (r+1);
      }
    }
    if(b && i==0){
      *(r+0) = 1;
    }
  }
  *(returnSize) = digitsSize+1;
  return r;
}