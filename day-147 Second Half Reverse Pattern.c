/*
The program must accept an even integer N as the input. The program must print the desired pattern as shown in the Example Input/Output section.

Boundary Condition(s): 
	4 <= N <= 50

Input Format:
	The first line contains N.

Output Format:
	The first N/2 lines contain the desired pattern as shown in the Example Input/Output section.

Example Input/Output 1:
	Input
		6
	Output
		1 2 3 6 5 4
		* 1 2 4 3
		* * 1 2

Example Input/Output 2:
	Input 
		8
	Output:
		1 2 3 4 8 7 6 5
		* 1 2 3 6 5 4
		* * 1 2 4 3
		* * * 1 2

*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	scanf("%d",&n);
	int k=n,u;
	for(int i=1;i<=n/2;i++)
	{
		u=k;
		for(int j=1;j<i;j++)
			printf("*");
		for(int j=1;j<=(n/2)-i+1;j++)
			printf("%d ",j);
		for(int j=1;j<=(n/2)-i+1;j++)
		{
			printf("%d ",u);
			u--;
		}
		k-=2;
		printf("\n");
	}
}