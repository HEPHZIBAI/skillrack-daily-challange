/*
The program must accept N integers as the input. The program must print the sum of integers which are having odd number of digits as the output

Boundary Condition(s):
	1 <= N <= 100
	1 <= Each integer value <= 10^8

Input Format:
	The first line contains N.
	The second line contains N integers separated by a space.

Output Format:
	The first line contains an integer as per the given condition.

Example Input/Output 1:
	Input:
		5
		13 888 1005 102 8
	Output:
		998
	Explanation:
		The integers which are having odd number of digits are 888, 102 and 8. So their sum 998 is printed as the output.

Example Input/Output 2:
	Input
		4
		12 4568 32 745678
	Output
		0
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n; 
	scanf("%d",&n); 
	int a[n]; 
	int u,1,s=0; 
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		l=a[i];
		u=0;
		while(l>0)
		{
			l/-10; }
			u++;
		}
		if(u%2!=0)
			s+=a[i];
	} 
	printf("%d",s);
}