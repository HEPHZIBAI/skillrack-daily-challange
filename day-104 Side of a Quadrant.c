/*
The program must accept the area of a square A (in cm²) as the input. The program must divide the square into four equal squares. Then the program must print the side (in cm) of any one of the squares with the precision up to two decimal places as the output.

Formula: Area of a square = side side

Boundary Condition(s): 
	1 <= A <= 10^4

Input Format: 
	The first line contains A.

Output Format: 
	The first line contains the area of the side with the smallest square.

Example Input/Output 1:
	Input 
		16
	Output 
		2.00

Example Input/Output 2:
	Input 
		14
	Output: 
		1.87
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int a;
	scanf("%d", &a); 
	float b=sqrt(a); 
	printf("%.2f",b/2);
}