/*
The program must accept an integer matrix of size NxN containing only 1s and Os as the input. The program must find the maximum possible square containing only 1's in the matrix. Then the program must print the area of the maximum possible square as the output.

Boundary Condition(s): 
	1 <= N <= 50

Input Format:
	The first line contains N.
	The next N lines each contain N integers separated by a space.

Output Format:
	The first line contains the area of the maximum possible square.

Example Input/Output 1:
	Input:
		5
		1 1 1 1 0
		1 1 1 0 0
		1 1 1 0 0
		1 0 1 1 1
		1 1 1 0 1
	Output:
		9
	Explanation:
		The maximum possible square containing only 1s in the matrix is highlighted below.
		1 1 1 1 0
		1 1 1 0 0
		1 1 1 0 0
		1 0 1 1 1
		1 1 1 0 1
		The area of the maximum possible square is 9 (3*3 = 9).

Example Input/Output 2:
	Input:
		4
		1 1 0 1
		0 1 1 1
		0 1 1 0
		1 1 0 0
	Output:
		4

Example Input/Output 3:
	Input:
		6
		1 1 1 0 0 0
		1 1 1 1 1 1
		0 0 0 0 1 1
		1 0 1 0 1 1
		0 0 0 0 0 1
		0 0 0 0 0 1
	Output
		4
*/
#include<stdio.h>
#include<stdlib.h>

int min(int a, int b)
{
	if(a>b)
		return b;
	else
		return a;
}

int main()
{
	int n;
	scanf("%d",&n);
	int a[n][n];

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{ 
			scanf("%d",&a[i][j]);
		}
	}

	int l=0;

	for(int i=1;i<n;i++)
	{
		for(int j=1;j<n;j++)
		{ 
			if(a[i][j]==1)
			{ 
				a[i][j]=min(a[i-1][j], min(a[i][j-1] a[i-1][j-1]))+1; 
				if(a[i][j]>l) 
					l=a[i][j]; 
			}

		}
	} 
	if (n==1) 
	{ 
		printf("%d",a[0][0]);
	}
	else 
		printf("%d",l*l);
}