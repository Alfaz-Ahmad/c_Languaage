#include <stdio.h>
#include <math.h>

int main() {
	float det, a, b, c, r1 , r2, re, im;
	printf("Enter the cofficients a,b,c: ");
	scanf("%f %f %f",&a, &b, &c);
	det = ((b*b)-(4*a*c));
	
	if (det>0){
		r1 = ((-b+sqrt(det))/2*a);
		r2 = ((-b-sqrt(det))/2*a);
		printf("Real Roots: %f and %f", r1, r2);
	}
	
	else if (det==0){
		r1 = ((-b)/(2*a)); 
		r2 = ((-b)/(2*a));
		printf("Equal Root: %f and %f", r1,r2);
	}
	
	else{
		re = -b/(2*a);
		im = sqrt(-det)/(2*a);
		printf("%.2f+%.2fi %.2f-%.2fi", re, im, re, im);
	}
}
