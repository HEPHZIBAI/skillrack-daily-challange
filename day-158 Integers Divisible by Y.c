/*
The program must accept N integers and two integers X and Y as the input. The program must print the integers which are having exactly X digits and also divisible by Y among the N integers as the output. If there is no such integer, the program must print -1 as the output.

Boundary Condition(s):
	1 <= N <= 100
	1 <= Each integer value <= 10^8
	1 <= x <= 8
	1 <= Y <= 100

Input Format:
	The first line contains N.
	The second line contains N integers separated by a space. 
	The third line contains X and Y separated by a space

Output Format:
	The first line contains the integer value(s) or -1.

Example Input/Output 1: 
	Input
		5
		657 12 10 87 66
		2 3
	Output:
		12 87 66
	Explanation:
		Here X=2 and Y=3.
		The integers which are having exactly 2 digits and also divisible by 3 are 12, 87 and 66.
		Hence the output is 12 87 66

Example Input/Output 2:
	Input
		4
		2245 6845 3214 214
		3 5
	Output:
		-1
*/


#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main()
{
	int n,x,y,m=1; 
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	scanf("%d%d",&x,&y); 
	int b=pow(10,x);
	int c-b/10;
	
	for(int i=0;i<n;i++)
	{
		if(a[i]>=c && a[i]<b && a[i]%y==0)
		{
			printf("%d",a[i]);
			m=0;
		}
	}
	if(m) 
		printf("-1");
}