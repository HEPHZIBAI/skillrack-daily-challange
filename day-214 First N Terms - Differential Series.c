/*
The program must accept an integer N as the input. The program must print the first N terms in the series given below.
The order of the series must be 2, 5, 10, 17, 26, 37, 50, 65,... and so on.

Boundary Condition(s):
	1 <= N <= 1000

Input Format:
	The first line contains N.

Output Format:
	The first line contains the first N terms in the series separated by a space.

Example Input/Output 1:
	Input:
		5
	Output:
		2 5 10 17 26
	Explanation:
		Here N = 5.
		The first 5 terms in the series are 2 5 10 17 26.
		Hence the output is 2 5 10 17 26

Example Input/Output 2:
	Input:
		10
	Output:
		2 5 10 17 26 37 50 65 82 101
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	scanf("%d",&n);
	int u=3;
	int y=2;
	for(int i=0;i<n;i++)
	{
		printf("%d ",y);
		y+=u;
		u+=2;
	}
}
