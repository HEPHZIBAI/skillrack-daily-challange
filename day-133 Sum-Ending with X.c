/*
The program must accept N integers and an integer X as the input. The program must print the sum of integers ending with X among the N integers as the output. If there is no such integer, the program must print 0 as the output.

Boundary Condition(s): 
	1 <= N <= 100 
	1 <= x <= 10^5 
	1 <= Each integer value <= 10^7

Input Format:
	The first line contains N and X separated by a space. 
	The second line contains N integers separated by a space.

Output Format: 
	The first line contains the sum of integers ending with X among the N integers.

Example Input/Output 1:
	Input
		5 4
		87 54 15 984 104
	Output
		1142
	Explanation:
		The integers ending with 4 among the 5 integers are 54, 984 and 104. 
		Hence their sum 1142 (54984 104) is printed as the output

Example Input/Output 2:
	Input:
		4 87
		187 95787 154 978
	Output
		95974

Example Input/Output 3:
	Input
		6 400
		6500 98 2 540 12 14
	Output
		0
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n,x,s=0;
	scanf("%d%d",&n,&x);
	int a[n],t=x,h=1;

	while(t>0)
	{
		h*=10;
		t/=10;
	}
	
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%h==x)
			s+=a[i];
	}
	printf("%d",s);
}