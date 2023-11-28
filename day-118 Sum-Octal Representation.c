/*
The program must accept an integer N as the input. The program must print the sum of digits in the octal representation of N as the output.

Boundary Condition(s):
	1 <= N <= 10^8

Input Format:
	The first line contains N.

Output Format:
	The first line contains the sum of digits in the octal representation of N.

Example Input/Output 1:
	Input
		12
	Output 
		5
	Explanation:
		The octal representation of 12 is 14.
		The sum of digits in 14 is 5. Hence the output is 5

Example Input/Output 2:
	Input:
		9
	Output:
		2
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i; 
	scanf("%d",&i);
	int h=1;
	int s=0;
	while(i>0)
	{
		s+=(i%8);
		i/=8;
	}
	printf("%d",s);
}