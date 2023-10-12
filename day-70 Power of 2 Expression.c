/*
The program must accept an integer N representing a power of 2 as the input. The program must print the expression E which represents the product of 2s for the given integer N as the output.

Boundary Condition(s): 
	2 <= N <= 10^4

Input Format: 
	The first line contains N.
Output Format:
	The first line contains the expression E.

Example Input/Output 1:
	Input 
		8
	Output
		2*2*2
	Explanation:
		Here 8 = 2^3. Hence the output is 2*2°2

Example Input/Output 2:
	Input 
		512
	Output
		2*2*2*2*2*2*2*2*2
*/
#include<stdio.h> 
#include<stdlib.h>

int main()
{
	int a; 
	scanf("%d",&a); 
	while(a>2)
	{
		printf("2*"); 
		a/=2;
	} 
	printf("2");
}