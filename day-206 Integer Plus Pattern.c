/*
The program must accept an integer N as the input. The program must print the desired pattern as shown in the
Example Input/Output section.

Note: N is always an odd integer.

Boundary Condition(s):
	3 <= N <= 25

Input Format:
	The first line contains N.

Output Format:
	The lines containing the desired pattern as shown in the Example Input/Output section.

Example Input/Output 1:
	Input:
		5
	Output:
		5 4 3 2 1 2 3 4 5
		4 4 3 2 1 2 3 4 4
		3 3 3 2 1 2 3 3 3 
		2 2 2 2 1 2 2 2 2
		1 1 1 1 1 1 1 1 1 
		2 2 2 2 1 2 2 2 2 
		3 3 3 2 1 2 3 3 3 
		4 4 3 2 1 2 3 4 4
		5 4 3 2 1 2 3 4 5

Example Input/Output 2:
	Input:
		3
	Output: 
		3 2 1 2 3 
		2 2 1 2 2
		1 1 1 1 1
		2 2 1 2 2
		3 2 1 2 3
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	scanf("%d",&n); 
	int t=n;
	for(int i=0;i<n;i++)
	{
		for(int k=0;k<i;k++)
			printf("%d ",t);
		for(int k=t;k>0;k--)
			printf("%d ",k);
		for(int k=2;k<=t;k++)
			printf("%d ",k);
		for(int k=0;k<i;k++)
			printf("%d ",t);
		t-=1;
		printf("\n");
	}

	for(int i=n;i>1;i--)
	{
		for(int k=1;k<i;k++)
			printf("%d ",t);
		for(int k=t-1;k>0;k--)
			printf("%d ",k);
		for(int k=2;k<t;k++)
			printf("%d ",k);
		for(int k=1;k<i;k++)
			printf("%d ",t);
		printf("\n");
		t+=1;
	}
}
