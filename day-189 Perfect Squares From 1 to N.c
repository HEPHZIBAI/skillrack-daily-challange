/*

The program must accept an integer N as the input. The program must print the perfect squares from 1 to N separated by a space as the output.

Boundary Condition(s):
	1 <= N <= 10^5

Input Format:
	The first line contains N.

Output Format:
	The first line contains the perfect squares from 1 to N separated by a space.

Example Input/Output 1:
	Input:
		31
	Output:
		1 4 9 16 25
	Explanation:
		The perfect squares from 1 to 31 are 1, 4, 9, 16 and 25. 
		Hence the output is 1 4 9 16 25

Example Input/Output 2:
	Input: 
		45
	Output:
		1 4 9 16 25 36
	
Example Input/Output 3:
	Input:
		49
	Output:
		1 4 9 16 25 36 49

*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	scanf("%d", &n);
	for(int i=1;;i++)
	{
		int h=i*i;
		if(h>n)
			break; 
		printf("%d ",h);
	}
}
