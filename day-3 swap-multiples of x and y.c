/*
The program must accept N integers and two integers X and Y as the input. The program must swap the first occurring mutiple of X and the last occurring multiple of Y among the N integers. Then the program must print modified values of the N integers as the output Note

At least one multiple of X and Y are always present in the N integers.

Boundary Conditions)

	2 <= N <= 100
	
	1 <= X Y <= 100

	1 c Each integer value <= 10^8

Input Format

	The first line contains the value of N.

	The second line contains the value of N integers separated by space(s). The third line contains the value of X and Y separated by space(s).

Output Format:

	The first line contains the modified value of N integers as per the conditions.

Example Input/Output 1:

	Input:

		10

		13 28 76 34 86 77 18 92 57 10

		7 11

	Output

		13 77 76 34 86 28 18 92 57 10

	Explanation:

		The first occurring multiple of 7 among the 10 integers is 20. The last occurring multiple of 11 among the 10 integers is 77. So these two values are swaped in their positions. Hence the output is 
13 77 76 34 86 28 18 92 57 10
*/


//answer

#include<stdio.h> 
#include<stdlib.h>

int main()

{
	int n;
	scanf("%d",&n);
	int a[n]; 
	for (int i=0;i<n;i++) 
		scanf("%d",&a[i]);
	int x,y; 
	scanf("%d %d",&x,&y); 
	int r,f; 
	for (int i=0;i<n;i++)
	{
		if(a[i]%x==0)
		{
			r=i; 
			break;
		}
	}
	for (int i=n-1;i>=0;i--)
	{
		if(a[i]%y==0)
		{
			f=i; 
			break;
		}
	}

	int t=a[r]; 
	a[r]=a[f];
	a[f]=t; 
	for (int i=0;i<n;i++) 
		printf("%d ",a[i]);
}
	
