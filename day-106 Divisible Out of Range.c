/*
The program must accept three integers X, Y and Z as the input. The program must find and print the smallest positive integer N based on the following conditions.N is divisible by Z N is not equal to any of the integers from X to Y (where X < Y).

Boundary Condition(s):
	1 <= X, Y, Z <= 10^8

Input Format:
	The first line contains X, Y and Z separated by a space.

Output Format:
	The first line contains N.

Example Input/Output 1:
	Input: 
		282
	Output 
		10
	Explanation:
		10 is the smallest integer which is divisible by 2 and it is not equal to any integers from 2 to 8.So 10 is printed as the output.

Example Input/Output 2:
	Input: 
		5 10 4
	Output: 
		4

*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	int x,y,z; 
	scanf("%d%d%d", &x,&y,&z); 
	int m=1;
	for (int i=1;i<x;i++)
	{
		if(i%2==0)
		{
			printf("%d",i); 
			m=0; 
			break;
		}
	}
	if(m)
	{
		for (int i=y+1;;i++)
		{
			if(i%z==0)
			{
				printf("%d",i);
				break;
			}
		}
	}
}