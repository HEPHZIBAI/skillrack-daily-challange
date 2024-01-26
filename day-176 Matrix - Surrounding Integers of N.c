/*
The program must accept an integer matrix of size RxC and an integer N as the input. The program must print the surrounding integers of N (all possible 8 integers). If the integer N is not present in the matrix then the program must print -1 as the output.

Note: All the integers in the matrix are unique.

Boundary Condition(s):
	2 <= R, C <= 50

Input Format:
	The first line contains R and C separated by a space.
	The next R lines each contain C integers separated by a space.
	The (R+2)nd line contains N.

Output Format:
	The first line contains the surrounding integers of N separated by a space or -1.

Example Input/Output 1:
	Input:
		4 5
		21 68 13 60 42
		75 38 80 93 88
		95 94 16 58 17
		91 28 84 56 18 
		16
	﻿Output:
		38 80 93 94 58 28 84 56
	Explanation:
		In the 4x5 matrix, the surrounding integers of 16 are highlighted below.
		21 68 13 60 42
		75 38 80 93 88
		95 94 16 58 17
		91 28 84 56 18 
		Hence the output is 38 80 93 94 58 28 84 56

Example Input/Output 2:
	Input:
		2 3
		39 70 20
		67 15 22
		39
	Output:
		70 67 15

Example Input/Output 3:
	Input:
		3 3
		43 93 69
		70 10 61
		34 19 46
		11
	Output: 
		-1

*/


#include<stdio.h>
#include<stdlib.h>

int main()
{
	int r,c,x,y,n,m=0;
	scanf("%d %d",&r,&c);
	int a[r][c];
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			scanf("%d", &a[i][j]);
		}
	}
	scanf("%d",&n);
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			if(n==a[i][j])
			{
				x=i;
				y=j;
				m=1;
				break;
			}
		}
	}
	if(m)
	{
		if(x-1>=0)
		{
			if(y-1>=0)
				printf("%d ",a[x-1][y-1]);
			printf("%d ",a[x-1][y]); 
			if(y+1<c)
				printf("%d ",a[x-1][y+1]);
		}
		if(y-1>=0)
			printf("%d ",a[x][y-1]);

		if(y+1<c)
			printf("%d ",a[x][y+1]);

		if(x+1<r)
		{
			if(y-1>=0)
				printf("%d ",a[x+1][y-1]);
			printf("%d ",a[x+1][y]); 
			if(y+1<c)
				printf("%d ",a[x+1][y+1]);
		}
	}	
	else
		printf("-1");
}