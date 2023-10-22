/*
The program must accept three integers X, Y and Z as the input. The program must print their sum if all the three integers are even. Else the program must print their product as the output.

Boundary Condition(s):
	1 <= X Y, Z <= 10^8

Input Format:
	The first line contains X, Y and Z separated by a space.

Output Format:
	The first line contains the sum of X, Y and Z or the product of X, Y and Z

Example Input/Output 1:
	Input 
		10 2 4
	Output 
		16
	Explanation:
		Here all the three integers are even, so their sum 16 (10+2+4) is printed as the output.

Example Input/Output 2:
	Input 
		5 5 10
	Output 250
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	Long int x,y,z; 
	scanf("%ld%ld %ld", &x,&y, &z); 
	if(x%2==0 && y%2==0 && z%2==0) 
		printf("%ld",x+y+z);
	else 
		printf("%ld",x y z);
}