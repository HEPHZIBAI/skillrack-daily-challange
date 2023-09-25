/*
The program must accept two integers X and Y as the input. The program must print the uncommon factors of X and Y in descending order as the output. If there is no uncommon factor then the program must print -1 as the output.

Boundary Condition(s): 
	1 <= X, Y <= 1000

Input Format:
	The first line contains X and Y separated by a space.

Output Format:
	The first line contains either the uncommon factors of X and Y or -1.

Example Input/Output 1:
	Input
		24 100
	Output
		100 50 25 24 20 12 10 8 653
	Explanation:
		The factors of 24 are 1, 2, 3, 4, 6, 8, 12 and 24. 
		The factors of 100 are 1, 2, 4, 5, 10, 20, 25, 50 and 100. 
		Here the uncommon factors are 3, 5, 6, 8, 10, 12, 20, 24, 25, 50 and 100. So they are printed in descending order as the output.

Example Input/Output 2:
	Input
		36 36
	Output
		-1
*/
#include<stdio.h> 
#include<stdlib.h>

int main()
{	
	int a,b; 
	scanf("%d%d",&a,&b); 
	int n=2; 
	int k=0;
	int z[1000];
	while(n<=a || n<=b)
	{
		if((a%n==0&&b%n!=0)||(a%n!=0&&b%n==0))
		{
			z[k]=n;
			k++;
		}
		n++;
	} 
	k--;
	int m-1;
	for (;k>=0;k--)
	{	
		printf("%d",z[k]);
		m=0;
	}
	if(m)
		printf("-1");
}