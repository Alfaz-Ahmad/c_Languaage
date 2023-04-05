#include<stdio.h>
#include<string.h>

int main() {
	int i, j, n, k, sum = 0;
	char r_num[15];
	gets(r_num);
	n = strlen(r_num);
	char Ro[] = { 'I', 'V', 'X', 'L', 'C', 'D', 'M' };
	int Val[] = { 1,5,10,50,100,500,1000 };
	/*for (i = 0; i < 7; i++) {
		printf("%d\n", Val[i]);
	}*/
	for (i = 0; i < n; i++) {
		if (*(r_num + i) == 'I') {
			sum += 1;
		}
		else if (*(r_num + i) == 'V' || *(r_num + i) == 'X' || *(r_num + i) == 'L' || *(r_num + i) == 'C' || *(r_num + i) == 'D' || *(r_num + i) == 'M') {
			k = 0;
			for (j = 0; *(Ro + j) != *(r_num + i); j++) {
				//printf("%c \t %c\n", *(r_num + i - 1), Ro[j]);
				if (*(r_num + i - 1) == *(Ro + j)) {
					k = *(Val + j);
					sum -= k;
				}
			}
			//printf("Hello");
			sum += Val[j] - k;
		}
	}
	printf("%d", sum);
}