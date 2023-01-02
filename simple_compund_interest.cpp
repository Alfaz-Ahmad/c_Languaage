#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int p, t;
    float r, si, ci;
    scanf("%d %f %d",&p, &r, &t);
    si = (p * r *t)/100;
    printf("%.2f", &si);
    return 0;
}
