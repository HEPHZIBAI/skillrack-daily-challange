/*
The program must accept the binary representation of two integers X and Y as the input. The program must print the result of the bitwise XOR operation of the two binary representations (XY) as the output. Note: The number of bits in the binary representation of X and Y are always equal.

Boundary Condition(s):
	1 < Length of each binary representation <= 63

Input Format:
	The first line contains the binary representation of X.
	The second line contains the binary representation of Y.

Output Format:
	The first line contains the binary representation of X ^ Y.

Example Input/Output 1:
	Input
		1010100 
		0100101
	Output 
		1110001

Example Input/Output 2:
	Input
		1110 
		1010
	Output 
		0100
*/


#include<stdio.h> 
#include<stdlib.h>

int main()
{
	char a[65],b[65]; 
	scanf("%s\n%s",a,b); 
	for (int i=0;i<strlen(a);i++)
	{
		if(a[i]==b[i]) 
			printf("0");
		else 
			printf("1");
	}
}