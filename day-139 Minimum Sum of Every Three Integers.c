/*
The program must accept N integers (where N is always a multiple of 3) as the input. The program must print the minimum sum among the sum of every three integers as the output.

Boundary Condition(s): 
	3 <= N <= 99 
	1 <= Each integer value <= 10^5

Input Format:
	The first line contains N.
	The second line contains N integers separated by a space.

Output Format:
	The first line contains the minimum sum among the sum of every three integers.

Example Input/Output 1:
	Input:
		6
		45 10 90 1 50 25
	Output
		76
	Explanation:
		Here the 6 integers are 45 10 90 1 50 and 25. 
		The sum of the first three integers is 145. 
		The sum of the last three integers is 76. 
		Here the minimum sum is 76, so it is printed as the output.

Example Input/Output 2:
	Input
		9
		10 37 27 100 57 42 15 46 76
	Output
		74

*/

#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{ 	
		scanf("%d",&a[i]);
	}
	int c,l=INT_MAX;
	for(int i=0;i<n;)
	{
		c=0;
		for(int j=0;j<3 && i<n;j++)
		{
			c+=a[i];
			i++;
		}
		if(l>c)
			l=c;
	}
	printf("%d",l);
}