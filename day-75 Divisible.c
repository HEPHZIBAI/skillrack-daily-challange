/*
The program must accept N integers as the input. The program must print the integers that are divisible by the sum of the digits among the N integers. If there is no such integer then the program must print -1 as the output.

Boundary Condition(s):
	1 <= N <= 100
	1 <= Each integer value <= 10^8

Input Format:
	The first line contains N.
	The second line contains N integers separated by a space.

Output Format:
	The first line contains a list of integers as per the given condition separated by a space or -1.

Example Input/Output 1:
	Input
		5
		10 14 12 8 195
	Output
		10 12 8 195
	Explanation:
		Here N=5,
		The first integer 10 is divisible by 1 (1+0). So 10 is printed.
		The second integer 14 is not divisible by 5 (1+4). So 14 is NOT printed.
		The third integer 12 is divisible by 3 (1 + 2). So 12 is printed.
		The fourth integer 8 is divisible by 8. So 8 is printed.
		The fifth integer 195 is divisible by 15 (1 + 9 + 5). So 195 is printed.

Example Input/Output 2:
	Input
		3
		545 13 66
	Output
		-1
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	scanf("%d", &n);
	int a[n];
	for (int i=0;i<n;i++)
		scanf("%d", &a[i]);
	int k;
	int t;
	int m-1;
	for (int i=0;i<n;i++)
	{
		k=a[i];
		t=0;
		while(k>0)
		{
			t+=(k%10);
			k/=10;
		}
		if(a[i]%t==0)
		{
			printf("%d ",a[i]);
			m=0;
		}
		if(m)
			printf("-1");
}