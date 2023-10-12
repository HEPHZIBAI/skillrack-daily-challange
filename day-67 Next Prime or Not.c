/*
The program must accept two prime numbers X and Y as the input. The program must print YES if Y is the next immediate prime number of X. Else the program must print NO as the output.

Boundary Condition(s): 
	2 <= X <Y <= 10^6

Input Format:
	The first line contains X and Y separated by a space.

Output Format: 
	The first line contains YES or NO.

Example Input/Output 1:
	Input
		2 3
	Output
		YES

Example Input/Output 2:
	Input 
		7 11
	Output
		YES

Example Input/Output 3:
	Input: 
		13 19
	Output: 
		NO
*/
#include<stdio.h> 
#include<stdlib.h>

int main()
{
	int x,y; 
	scanf("%d %d", &x,&y);
	int k=x+1; 
	int m=1;
	while(k<=y)
	{
		m=1; 
		for (int i=2;i<k;i++)
		{
			if(k%i==0)
			{
				m=0;
				break;
			}
		}
		if(m==1)
			break;
		k++;
	}
	if(k==y) 
		printf("YES");
	else
		printf("NO");
}