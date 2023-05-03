# include<stdio.h>
# include<stdlib.h>
# include<math.h>

int Va(int v){
    int n=5, d, sum=0, i;
    for(i=1;i<=v;i++){
        n = n/2;
        sum += n;
        n *= 3;
    }
    return sum;
}

int main(){
    int n;
    scanf("%d",&n);
    printf("%d",Va(n));
    return 0;
}
