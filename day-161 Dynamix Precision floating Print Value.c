/*
The program must accept three integers M, N and X as the input. The program must print the value of M/N with the precision up to X decimal places as the output.

Boundary Condition(s): 
	1 <= M, N <= 10^8 1 X 6

Input Formats
	The first line contains M, N and X separated by a space.

Output Formats
	The first line contains the value of M/N with the precision up to X decimal places.

Example Input/Output 1:
	Input
		22 7 3
	Output: 
		3.143

Example Input/Output 2
	Input
		22 7 5
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	double m,n;
	int a;
	scanf("%lf%1f%d",&m,&n,&a); 
	printf("%.*lf",a,m/n);
}