/*
The program must accept a string S as the input. Some characters in the string S surrounded by anyone of the brackets (0. [] and [). The program must remove those brackets from the string S and print it as the output.

Boundary Condition(s):
	1 <= Length of S <<<= 1000

Input Format:
	The first line contains S

Output Format:
	The first line contains the modified string S.

Example Input/Output 1:
	Input 
		Jac[k]po(t)
	Output 
		Jackpot
	Explanation:
		Here the string Sis Jac[k]po(t) After removing the brackets [] and 0, the string becomes Jackpot So Jackpot is printed as the output.

Example Input/Output 2:
	Input 
		D(v)[o]ra[k]
	Output 
		Dvorak
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	char a[1000];
	scanf("%s",a);
	for(int i=0;i<strlen(a);i++)
	{
		if(isalpha(a[i]))
		{
			printf("%c", a[i]);
		}
	}
}
