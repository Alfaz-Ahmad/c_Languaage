# include <stdio.h>
# include <stdlib.h>
/*
Two cats and a mouse are at various positions on a line. You will be given their starting 
positions. Your task is to determine which cat will reach the mouse first, assuming the mouse 
does not move and the cats travel at equal speed. If the cats arrive at the same time, the 
mouse will be allowed to move and it will escape while they fight.

You are given  queries in the form of , , and  representing the respective positions for cats  
and , and for mouse . Complete the function  to return the appropriate answer to each query, 
which will be printed on a new line.

If cat  catches the mouse first, print Cat A.
If cat  catches the mouse first, print Cat B.
If both cats reach the mouse at the same time, print Mouse C as the two cats fight and mouse escapes.

Example

The cats are at positions  (Cat A) and  (Cat B), and the mouse is at position . Cat B, at position  
will arrive first since it is only  unit away while the other is  units away. Return 'Cat B'.

Function Description

Complete the catAndMouse function in the editor below.

catAndMouse has the following parameter(s):

int x: Cat 's position
int y: Cat 's position
int z: Mouse 's position
Returns

string: Either 'Cat A', 'Cat B', or 'Mouse C'
Input Format

The first line contains a single integer, , denoting the number of queries.
Each of the  subsequent lines contains three space-separated integers describing the respective 
values of  (cat 's location),  (cat 's location), and  (mouse 's location).
*/


int catAndMouse(unsigned short int x,unsigned short int y,unsigned short int z){
	if(abs(x-z)>abs(y-z)){
		printf("Cat B\n");
	}else if(abs(y-z)>abs(x-z)){
		printf("Cat A\n");
	}else if(abs(y-z)==abs(x-z)){
		printf("Mouse C\n");
	}
	return 0;
}



int main(){
	unsigned short int q,k=1;
	printf("Enter the number of queries: ");
	scanf("%hu",&q);
	while(k<=q){
		unsigned short int x,y,z;
		printf("Enter the value of x y z: ");
		scanf("%hu %hu %hu", &x, &y, &z);
		catAndMouse(x,y,z);
		k++;
	}
}
