/*
The program must accept an integer N as the input. The program must print the largest possible integer containing all the even digits of N as the output. If it is not possible to form such integer then the program must print -1 as the output.

Boundary Condition(s) 
	1 <= N <= 10^8

Input Format:
	The first line contains N.

Output Format:
	The first line contains the largest possible integer containing all the even digits of N or -1.

Example Input/Output 1:
	Input: 
		748009
	Output 
		8400
	Explanation: 
		The even digits in 748009 are 4 8 0 and 0. So the largest possible integer from those even digits is 8400.Hence the output is 8400

Example Input/Output 2:
	Input 
		12846
	Output 
		8642

Example Input/Output 3:
	Input 
		5719
	Output 
		-1
*/



#include<stdio.h> 
#include<stdlib.h>
int main()
{
	int a; 
	scanf("%d",&a); 
	int b[10]; 
	for (int i=0;i<10;i++)
	{
		b[i]=0;
	}
	int f-1; 
	while(a>0)
	{
		int k-a%10; 
		if(k%2==0)
		{
			b[k]++; 
			f=0;
		} 
		a/=10;
	} 
	for (int i=8;i>=0;i-=2)
	{
		while(b[i]>0)
		{
			printf("%d",i); 
			b[i]--;
		}
	}
	if(f)
		printf("-1");
}