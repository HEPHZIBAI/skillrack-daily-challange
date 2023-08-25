/*
The program must accept the x and y coordinates of the center point and any point on the circumference of a circle as the input. The program must print the area of a circle with the precision upto two decimal places as the output

Boundary Condition(s) -100 <= x, y < 100

Input Format: 
	The first line contains the x and y coordinates of the center point separated by a space. The second line contains the x and y coordinates of any point on the circumference of a circle separated by a space.

Output Format:

	The first line contains the area of a circle.

Example Input/Output 1:

	Input 
		0 -5
		2 3
	Output 
		213.71
Example Input/Output 2:
	
	Input 
		0 0
		11 11
	Output
		760.57
	
*/

//answer



#include<stdio.h> 
#include<stdlib.h>

int main()
{
	int a,b,c,d;
	scanf("%d%d%d%d",&a,&b,&c,&d); 
	printf("%.2f", (((c-a) (c-a))+((d-b)*(d-b)))*(22/7.0));
}