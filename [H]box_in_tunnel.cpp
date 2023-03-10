/*
You are transporting some boxes through 
a tunnel, where each box is a parallelepiped, 
and is characterized by its length, width 
and height.

The height of the tunnel 41 feet and the width 
can be assumed to be infinite. A box can be 
carried through the tunnel only if its height 
is strictly less than the tunnel's height. 
Find the volume of each box that can be 
successfully transported to the other end of 
the tunnel. Note: Boxes cannot be rotated.
*/


#include <stdio.h>
#include <stdlib.h>
#define MAX_HEIGHT 41

typedef struct box{
	int length;
    int width;
    int height;
}box;

int get_volume(box b) {
	int v = b.height * b.width * b.length;
    return v;
}

int is_lower_than_max_height(box b) {
	if(MAX_HEIGHT <= b.height){
        return 0;
    }else{
        return 1;
    }
    return 0;
}

int main()
{
	int n;
	scanf("%d", &n);
	box *boxes = (box*)malloc(n * sizeof(box));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &boxes[i].length, &boxes[i].width, &boxes[i].height);
	}
	for (int i = 0; i < n; i++) {
		if (is_lower_than_max_height(boxes[i])) {
			printf("%d\n", get_volume(boxes[i]));
		}
	}
	return 0;
}
