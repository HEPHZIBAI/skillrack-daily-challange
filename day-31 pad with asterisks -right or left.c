/*
Two string values 51 and 52 are passed as input to the program. The program must pad $1 with asterisks on the right (when the length of $2 is greater than the length of S1) and must pad $2 with asterisks on the left (when the length of 51 is greater than the length of S2),
Boundary Condition(s): 1<= Length of S1, S2 <= 100

Input Format:
	The first line contains $1.
	The second line contains $2.

Output Format:
	The first line contains a string based on the given conditions. The second line contains a string based on the given conditions.

Example Input/Output 1:
	Input 
		lemon
		rainbowcolor
	Output
		lemon******
		rainbowcolor
	Explanation.
		The length of the string lemon is The length of the string rainbowcolor is 12.Here the length of $2 is greater than the length of $1. So the string lemon is padded with asterisks on the right side.Hence the output is lemon,rainbowcolor

Example Input/Output 2:
	Input
		maintain
		pen
	Output
		maintain 
		*****pen
*/



#include<stdio.h> 
#include<stdlib.h>
int main()
{
	char s1[100],s2[100]; 
	scanf("%s\n%s",s1,s2); 
	int x=0,y=0;
	if(strlen(s1)>strlen(s2))
		x=1; 
	else
		y=1; 
	if(x==1)
	{
		printf("%s\n",s1); 
		for (int m=0;m<strlen(s1)-strlen(s2);i++) 
			printf("*");
		printf("%s",s2);
	}
	else
	{
		printf("%s", s1);
		for (int m=0;m<strlen(s2)-strlen(s1);m++)
			printf("*");
		printf("\n%s",s2);
	}
}
		