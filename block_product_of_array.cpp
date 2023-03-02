/*Write a recursive code to find the block product of an array.

The following is the algorithm to find the block product recursively:

Given an array A partition it into four quadrants of equal size:

                          M=[ABCD]


The block product of the array is defined recursively as : 

                           |M|=|A|*|D|-|B|*|C|


With the base case, when n = 4 ,  |[a,b,c,d]|=ad-bc


Note : You can assume that n is a power of 4. n>=4 and n <= 1024.*/

# include <stdio.h>

int det(int m[], int n){
  if(n==4){
    return m[0]*m[3] - m[1]*m[2];
  }else{
    	int k = n/4;
    int q1[k], q2[k], q3[k], q4[k];
    for(int i=0; i<k; i++){
      q1[i] = m[i];
      q2[i] = m[k+i];
      q3[i] = m[2*k+i];
      q4[i] = m[3*k+i];
    }
    return det(q1,k)*det(q4,k) - det(q2,k)*det(q3,k);
  }
}

int main(){
	int n;
  scanf("%d",&n);
  int m[n];
  for(int i=0; i<n;i++){
	scanf("%d", &m[i]);
  }
      printf("%d",det(m, n));
    return 0;
}
