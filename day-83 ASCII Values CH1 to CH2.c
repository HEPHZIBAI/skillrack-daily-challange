/*
The program must accept two characters CH1 and CH2 as the input. The program must print all the ASCII values from the ASCII of CH1 to the ASCII of CH2 as the output.

Boundary Condition(s)
	1 <= ASCII of CH1 <= ASCII of CH2 <= 127

Input Format:
	The first line contains CH1 and CH2 separated by a space.

Output Format:
	The first line contains the ASCII values from CH1 to CH2 separated by a space.

Example Input/Output 1:
	Input
		a e
	Output
		97 98 99 100 101
	Explanation:
		Here CH1 and CH2= 
		The ASCII value of is 97 and the ASCII value of is 101.Hence the output is 97 98 99 100 101

Example Input/Output 2
	Input: 
		U c
	Output
		85 86 87 88 89 90 91 92 93 94 95 96 97 98 99
*/


#include<stdio.h>
#include<stdlib.h>
int main()
{
	char a,b; 
	scanf("%c %c",&a,&b); 
	for(;a<=b;a++)
		printf("%d ",a);
}