/*Kapil belongs to a very rich family which owns many 
gold mines. Today, he brought N gold coins and decided 
to form a triangle using these coins. Isn't it strange? 
Kapil has an unusual way of forming a triangle using 
gold coins, which is described as follows:

He puts 1 coin in the 1st row. then puts 2 coins in the
 2nd row. then puts 3 coins in the 3rd row. and so on as 
 shown in the given figure. Kapil is interested in forming 
 a triangle with maximum possible height using at most N 
 coins. Can you tell him the maximum possible height of the 
 triangle?*/

int main(){
    int n,n1,k=1,i,j;
    //printf("Enter the number of test case: ");
    scanf("%d",&n);
    while(k<=n){
        //printf("\nEnter test case value: ");
        scanf("%d",&n1);
        int sum1=0,tem1=0;
        for (i=1;n1>=i;i++){
            for(j=1;i>=j;j++){
                tem1 = tem1 + 1;
            } 
            if (tem1 <= n1){
                sum1 = sum1 + 1;
            }
        }
    printf("%d\n",sum1);
    k++;
    }
}
