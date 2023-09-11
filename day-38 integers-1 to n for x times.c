/*
The program must accept two integers N and X as the input. The program must print the integers from 1 to N for X times as the output.

Boundary Condition(s): 
	1 <= N <= 1000
	1 <= X <= 100

Input Format: 
	The first line contains N and X separated by a space.

Output Format:
	The first line contains the integers separated by a space as per the given condition.

Example Input/Output 1:
	Input
		10 2
	Output 
		1 2 3 4 5 6 7 8 9 10 1 2 3 4 5 6 7 8 9 10

Example Input/Output 2:
	Input:
		54
	Output
		1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5
*/

#include<stdio.h> 
#include<stdlib.h>

int main()
{
	int n,x; 
	scanf("%d %d", &n,&x); 
	for(int i=0;i<x;i++)
	{
		for (int j=1;j<=n;j++)
		printf("%d ",j);
	}
}