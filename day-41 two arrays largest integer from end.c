/*
The program must accept two integer arrays of size M and N as the input. The program must print the largest integer in both the array at the same position starting from the end. If M is greater than N, the M-N integers have no pairs so such integers are printed as it is as the output.

Boundary Condition(s):
	1 <= N <= M <= 100
	1 <= Each integer value <= 10^5

Input Format:
	The first line contains M and N separated by a space.
	The second line contains M integers separated by a space . The third line contains N integers separated by a space.

Output Format:
	The first line contains the largest integers in both the array at the same position starting from the end.

Example Input/Output 1:
	Input
		64
		10 20 30 40 50 60 
		99 30 26 100

	Output	
		100 50 40 99 20 10
	Explanation:
		The largest integer between 60 and 100 is 100, so it is printed. 
		The largest integer between 50 and 26 is 50, so it is printed.
		The largest integer between 40 and 30 is 40, so it is printed.
		The largest integer between 30 and 99 is 99, so it is printed 
		The integer 20 has no pair, so 20 is printed.
		The integer 10 has no pair, so 10 is printed.

Example Input/Output 2:
	Input
		55
		10 20 30 40 50
		99 25 30 10 77
		
	Output:
		77 40 30 25 99
*/


#include<stdlib.h>
int main()
{
	int m,n;
	scanf("%d%d",&m,&n); 
	int a[m],b[n];
	for (int i=0;i<m;i++)
		scanf("%d", &a[i]);
	for(int j=0;j<n;j++)
		scanf("%d", &b[i]);
	while(n>=0&& m>=0)
	{
		if(a[m]>b[n])
			printf("%d ",a[m]);
		else
			printf("%d ",b[n]);
		m--;
		n--;
	}

	while(m>-1)
	{
		printf("%d ",a[m]);
		m--;
	}
	while(n>-1)
	{
		printf("%d",b[n]);
		n--;
	}
}