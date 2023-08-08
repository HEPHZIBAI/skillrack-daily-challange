/*
The program must accept two integers X and Y as the input. The program must print the first 10 multiples of X if X is greater than Y. Else the program must print the multiples of Y as the output.

Boundary Condition(s):

	1 <= X, Y <= 100

Input Format: 
	The first line contains the value of X and Y separated by a space.

Output Format:

	The first line contains the first 10 multiples of either X or Y separated by a space.

Example Input/Output 1:

	Input 
		45 34

	Output

		45 90 135 180 225 270 315 360 405 450

	Explanation:

		Here 45 is greater than 34. Hence the first 10 multiples of 45 are printed as the output

Example Input/Output 21

	Input 
		64
	Output

		6 12 18 24 30 36 42 48 54 60
*\

//answer

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x,y; 
	scanf("%d %d", &x, &y);
	if(x>y)
	{
		for (int i=1;i<=10;i++)
			printf("%d ",x*i);
	}
	else
	{
		for (int i=1;i<=10;i++) 
			printf("%d ",y*i);
	}
}