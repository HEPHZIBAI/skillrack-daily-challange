/*
The program must accept an integer N as the input. The program must print all the even factors of N in ascending order as the output.

Boundary Condition(s):
	1 <= N <= 10^5
Input Format: 
	The first line contains N.
Output Format: 
	The first line contains all the even factors of N separated by a space.

Example Input/Output 1:
	Input 
		16
	Output: 
		2 4 8 16
	Explanation
		The factors of 16 are 1248 16. The even factors of 16 are 248 16. So 248 16 are printed as the output.

Example Input/Output 2:
	Input
		100
	Output
		24 10 20 50 100
*/


#include<stdio.h> 
#include<stdlib.h>

int main()
{	
	int n;
	scanf("%d",&n); 
	for (int i=2;i<=n;i++)
	{
		if(n%i==0 && i%2==0)
			printf("%d ",i);
	}
}