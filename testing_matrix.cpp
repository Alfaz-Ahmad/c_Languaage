// Multiplication of Matrix
# include<stdio.h>

int main(){
	int r1, r2, c1, c2, i, j, k, e, sum;
	//printf("Enter the order of 1st matrix: ");
	scanf("%d %d",&r1, &c1);
	int mat1[r1*c1];
	//printf("Enter the order of 2nd matrix: ");
	scanf("%d %d",&r2,&c2);
	int mat2[r2*c2];
	if((c1 == r2) || (r1 == c2)){
		//printf("Enter the elements of 1st matrix: ");
		for(i=1;i<=(r1*c1);i++){
			scanf("%d",&mat1[i-1]);
		}
		//printf("Enter the elements of 2nd matrix: ");
		for(i=1;i<=(r2*c2);i++){
			scanf("%d",&mat2[i-1]);
		}
		if(c1 == r2){
			int temp[r1*c2];
			e = 0;
			i = 0;
			while(i<r1){
				j = 0;
				while(j<c2){
					k = 0;
					sum = 0;
					while(k < c1){
						sum = sum + mat1[(c1*i)+k] * mat2[(c2*k)+j];
						k++;
					}
					temp[e] = sum;
					e++;
					j++;
				}
				i++;	
			}
			printf("[ ");
			for(i=0;i<(r1*c2);i++){
				printf("%d ",temp[i]);
			}
			printf("]");
		}else if(r1 == c2){
			int temp[c1*r2];
			e = 0;
			i = 0;
			while(i<r2){
				j = 0;
				while(j<c1){
					k = 0;
					sum = 0;
					while(k < c2){
						sum = sum + mat2[(c2*i)+k] * mat1[(c1*k)+j];
						k++;
					}
					temp[e] = sum;
					e++;
					j++;
				}
				i++;	
			}
			printf("[ ");
			for(i=0;i<(r2*c1);i++){
				printf("%d ",temp[i]);
			}
			printf("]");
		}
	}else{
		printf("Matrix multiplication is not possible");
	}

}

