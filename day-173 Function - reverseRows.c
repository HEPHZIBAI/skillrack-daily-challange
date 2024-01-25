/*
You must implement the function reverseRows(int R, int C, int matrix[] [C]) which accepts an integer matrix of size RxC as the input. The function must modify the matrix by reversing each row of the matrix.

Example Input/Output 1:
	Input:
		4 3
		1 2 3
		4 5 6
		7 8 9
		3 7 8
	Output:
		Reversed Matrix:
		3 7 8
		7 8 9
		4 5 6
		1 2 3
	Explanation:
		After reversing each row of the 4x3 matrix, the matrix 
		3 7 8
		7 8 9
		4 5 6
		1 2 3	

Example Input/Output 2:
	Input:
		2 3
		10 20 30
		40 50 60
	Output:
		Reversed Matrix:
		40 50 60
		10 20 30
	
*/

﻿
#include <stdlib.h>
#include <stdio.h>
void reverseRows(int R, int C, int matrix[][C])
{
	int x,y;
	for (int i=C-1;i>=0;i--)
	{
		x=0;
		y=R-1;
		while(x<y)
		{
			int t=matrix[x][i];
			matrix[x][i]=matrix[y][i];
			matrix[y][i]=t;
			x++;
			y--;
		}
	}
}

int main()
{
	int R, C;
	scanf("%d %d",&R, &C);
	int matrix[R][C];
	for(int row = 0; row<R; row++)
	{
		for(int col=0; col<C; col++)
		{
			scanf("%d", &matrix[row][col]);
		}
	}
	reverseRows (R, C, matrix);
	printf("Reversed Matrix:\n");
	for(int row = 0; row < R; row++)
	{
		for(int col = 0; col ‹ C; col++)
		{
			printf("%d ",matrix[row][col]);
		}
		printf("\n");
	}
	return 0;
}

