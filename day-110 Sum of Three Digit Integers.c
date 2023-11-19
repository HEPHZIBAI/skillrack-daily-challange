/*
The program must accept an integer N (where the number of digits in N is always divisible by 3) as the input. The program must split the integer N into three-digit integers (every three consecutive digits). Then the program must print the sum Sof those three-digit integers as the output.

Boundary Condition(s): 
	100 <= N <= 999999999

Input Format: 
	The first line contains N.

Output Format: 
	The first line contains S.

Example Input/Output 1:
	Input 
		210045
	Output
		255
	Explanation:
		Here N 210045. The first three-digit integer of 210045 is 210. The last three-digit integer of 210045 is 045. So their sum 255 (210045) is printed as the output.

Example Input/Output 2:
	Input:
		100100
	Output
		200
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	Long int n; 
	scanf("%ld",&n); 
	int a[10000]; 
	int s=0; 
	while(n>0)
	{
		int m=n%1000; 
		s+=m; 
		n/=1000;
	} 
	printf("%d",s);
}