/*
The program must accept an integer N as the input. The program must print N characters from the string "abed" circularly in the clockwise direction as the output.

Boundary Condition(s):
	1 <= N <= 10^5

Input Format:
	The first line contains N.

Output Format:
	The first line contains a string denoting the N characters.

Example Input/Output 1:
	Input 
		5
	Output
		abcda
	Explanation:
		Here N-S So 5 characters from the string "abed" are printed circularly in the clockwise direction.Hence the output is abcda

Example Input/Output 2:
	Input
		10
	Output
		abcdabcdeb
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	scanf("%d",&n);
	char a='a';
	while(n>0)
	{
		printf("%c",a);
		a++;
		if(a=='e')
			a='a';
		n--;
	}
}