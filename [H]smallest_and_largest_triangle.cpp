#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;


float are(int i, triangle* tr){
	float d, p, a, s;
	d = (tr[i].a +tr[i].b +tr[i]. c);
    p = ((float)d/2);
    a = ((float)(p * (p-tr[i].a)*(p-tr[i].b)*(p-tr[i].c)));
    s = sqrtf(a);
    return s;
}

void sort_by_area(triangle* tr, int n) {
	int i;
    int l , b, h, j=0, temp;
    float area[n+1];
    for(i=0; i<n; i++){
        area[i] = are(i, tr);
    }
   while(j < n){
        for(i=0; i<n-1;i++){
            if(area[i] > area[i+1]){
                temp = area[i];
                area[i] = area[i+1];
                area[i+1] = temp;
                l = tr[i].a;
                b = tr[i].b;
                h = tr[i].c;
                tr[i].a = tr[i+1].a;
                tr[i].b = tr[i+1].b;
                tr[i].c = tr[i+1].c;
                tr[i+1].a = l;
                tr[i+1].b = b;
                tr[i+1].c = h;
            }
            else if(area[i] == area[i+1]){
            	if(are(i, tr) > are(i+1, tr)){
	                temp = area[i];
	                area[i] = area[i+1];
	                area[i+1] = temp;
	                l = tr[i].a;
	                b = tr[i].b;
	                h = tr[i].c;
	                tr[i].a = tr[i+1].a;
	                tr[i].b = tr[i+1].b;
	                tr[i].c = tr[i+1].c;
	                tr[i+1].a = l;
	                tr[i+1].b = b;
	                tr[i+1].c = h;            		
				}
            	
			}
        }
    j++;
    }
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = (triangle* )malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
