/*
The program must accept a character matrix of size RxC as the input. The program must print the first occurring vowels from the top in each column of the matrix as the output.
Note: At least one vowel is always occurred in each column of the matrix.

Boundary Condition(s):
	2 <= R, C <= 100

Input Format:
	The first line contains R and C separated by a space.
	The next R lines, each contains C characters separated by a space.

Output Format:
	The first line contains the first occurring vowels from the top in each column of the matrix.

Example Input/Output 1:
	Input
		4 4
		H N L A
		Y S I O
		h a O #
		e F @ a
	Output
		ealA
	Explanation:
		The first occurring vowels from the top in each column of the matrix are highlighted below.
		H N L A
		y S I O
		h a O #
		e F @ a
		So ealA is printed as the output

Example Input/Output 2:
	Input
		3 7
		o f w $ w E d
		t v M i O i l
		2 E e @ R O u
	Output
		oEeiOEu
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int r,c; 
	scanf("%d %d\n",&r,&c); 
	char a[r][c]; 
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++) 
			scanf("%c",&a[i][j]); 
		scanf("\n");
	} 
	for(int i=0;i<c;i++) 
	{
		for(int j=0;j<r;j++)
		{
			if(a[j][i]=='a'||a[j][i]=='e' ||a[j][i] 'i' a[j][i]=='o'||a[j][i]=='u'||a[j][i] =='A'||a[j][i]=='E'||a[j][i]=='1'||a[j][i] =='0'||a[j][i]=='U')
			{ 
				printf("%c", a[j][i]); break;
			} 
		}
	}
}