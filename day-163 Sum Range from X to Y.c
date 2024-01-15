/*
The program must accept N integers and two integers X and Y as the input. The program must print the sum of integers which are present in the range from X to Y among the N integers as the output.

Boundary Condition(s): 
	1 <= N <= 100 
	1 <= Each integer value <= 10^5 
	1 < X < Y <= 10^5

Input Format:
	The first line contains N.
	The second line contains N integers separated by a space. 
	The third line contains X and Y separated by a space.

Output Format:
	The first line contains the sum as per the given condition.

Example Input/Output 1:
	Input
		5
		4 2 1 5 8
		2 6
	Output
		11
	Explanation
		The integers which are present in the range from 2 to 6 are 4, 2 and 5. 
		So their sum 11 (4+2 + 5) is printed as the output.

Example Input/Output 2:
	Input
		6
		10 5 177 125 27 14
		15 20
	Output
		0
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,x,y;
	scanf("Xd",&n);
	int a[n],s=0;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	scanf("%d%d",&x,&y);
	for(int i=0;i<n;i++) 
	{
		if(a[i]>=x && a[i]<=y)
			s+=a[i];
	}
	printf("%d",s);
}
