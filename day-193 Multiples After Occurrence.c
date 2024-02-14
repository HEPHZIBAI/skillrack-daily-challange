/*
The program must accept N integers and an integer X. The program
must print the count C of multiples of X (which are greater than X) after the first occurrence of X.

Boundary Condition(s):
	1 <= N <= 1000
	1 <= X, Each integer value <= 10^8

Input Format:
	The first line contains N and X separated by a space.
	The second line contains N integer values separated by a space.

Output Format:
	The first line contains C.

Example Input/Output 1:
	Input:
		6 100
		500 100 200 100 600 545
	Output: 
		2
	Explanation:
		200 and 600 are the multiples. The second 100 is not counted as the multiples must be greater than X.

Example Input/Output 2:
	Input:
		6 50
		500 100 200 100 600 50
	Output: 
		0
*/


#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,x;
	scanf("%d %d",&n,&x);
	int a[n];
	int k=0,c=0;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	while(k<n && a[k]!=x)
	{
		k++;
	}

	for(int i=k+1;i<n;i++)
	{
		if(a[i]%x==0 && a[i]!=x) 
			c++;
	}
	printf("%d",c);
}