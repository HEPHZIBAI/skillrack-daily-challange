/*
The program must accept two integers N and K as the input. The program must generate a sequence of integers containing all the odd integers from 1 to N followed by all the even integers from 1 to N. Then the program must print the Kth integer in sequence as the output.

Boundary Condition(s): 
	1 <= K <= N <= 10^5

Input Format:
	The first line contains N and K separated by a space.

Output Format:
	The first line contains the Kth integer in sequence.

Example Input/Output 1:
	Input 
		10 3
	Output
		5
	Explanation:
		Here N = 10, so the sequence is 13579246810. The third integer in the sequence is 5, so it is printed as the output.

Example Input/Output 2:
	Input 
		77
	Output
		6
*/


#include<stdio.h> 
#include<stdlib.h>

int main()
{	
	int n,k;
	scanf("%d %d",&n,&k);
	int a[n];
	int l=0; 
	for (int i=1;i<=n;i+=2) 
	{	
		a[1]=i;	
		1++;
	} 
	for (int i=2;i<=n;i+=2)
	{
		a[l]=i; 
		l++;
	} 
	printf("%d", a[k-1]);
}