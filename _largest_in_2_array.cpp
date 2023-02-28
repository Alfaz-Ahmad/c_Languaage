/*Output the smallest number occurring in the first 
  array that does not occur in the second.
  In case there is no such number, output 0.*/

# include<stdio.h>

int sort(int a[], int l){
	int i, j, c=0, d, t;
	for(i=0;i<l;i++){
		d = c;
		for(j=0;j<l;j++){
			if(a[j+1] < a[j]){
				t = a[j+1];
				a[j+1] = a[j];
				a[j] = t;
				c++;
			}
		}
		if (c == d){
			break;
		}
	}
}

int main(){
	int n1, n2, i, j, c, a1[20], a2[20];
	//printf("Enter the size of array: ");
	scanf("%d",&n1);
	for(i=0;i<n1;i++){
		scanf("%d",&a1[i]);
	}
	//printf("Enter the size of array: ");
	scanf("%d",&n2);
	for(i=0;i<n2;i++){
		scanf("%d",&a2[i]);
	}
	//sort(a1,n1);
	for(i=0;i<n1;i++){
		c = 0;
		for(j=0;j<n2;j++){
			if(a1[i] == a2[j]){
				c++;
			}
		}
		if(c == 0){
			printf("%d", a1[i]);
			break;
		}else if(i+1 == n1){
			printf("%d", 0);
		}
	}
}
