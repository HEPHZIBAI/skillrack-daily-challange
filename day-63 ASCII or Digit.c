/*
The program must accept a string S as the input. For each character CH in the string S the program must print the output based on the following conditions.
-If CH is not a digit then the program must print its ASCII value. -If CH is a digit then the program must print CH as it is.

Boundary Condition(s) 
	1 <= Length of S <= 1000

Input Format: 
	The first line contains S.

Output Format:
	The first line contains the integers separated by a space as per the given conditions.

Example Input/Output 1:
	Input
		1abc25D
	Output 
		1 97 98 99 2 5 68
	Explanation:
		Here the string S is 1abc250
		The non-digit characters in the string are a b c D and their ascii values are 97 98 99 68 respectively.Hence the output is 1 97 98 99 2 5 68

Example Input/Output 2:
	Input 
		z1289Z
	Output: 
		122 1289 90
*/

#include<stdio.h> 
#include<stdlib.h>

int main()
{
	char a[10000]; 
	scanf("%s",a);
	for(int i=0;i<strlen(a);i++)
	{
		if(isdigit(a[i]))
		{
			printf("%d ",a[i]-'0'); }
		}
		else 
			printf("%d ",a[i]);
	}
}