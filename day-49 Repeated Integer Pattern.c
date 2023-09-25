/*
The program must accept an integer N as the input. The program must print the desired pattern as shown in the Example Input/Output section.

Boundary Condition(s):
	1 <= N <= 50

Input Format:
	The first line contains N.

Output Format:
	The lines contain the desired pattern as shown in the Example Input/Output section.

Example Input/Output 1:
	Input:
		4
	Output
		1234
		12234
		123334 
		1234444

Example Input/Output 2:
	Input 
		5
	Output:
		12345
		122345
		1233345
		12344445 
		123455555
*/
#include<stdio.h> 
#include<stdlib.h>
int main()
{
	int n;
	scanf("%d", &n); 
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=n;j++)
		if(j==i)
		{
			for (int k=0;k<j;k++)
				printf("%d ",j);
		}
		else
			printf("%d ",j);

		printf("\n");
	}
}