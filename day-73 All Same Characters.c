/*
The program must accept a string S as the input. The program must print YES if all the characters in the string S are same. Else the program must print NO as the output.

Boundary Condition(s): 
	1< Length of S<< 1000

Input Format:
	The first line contains S.

Output Format:
	The first line contains YES or NO.

Example Input/Output 1:
	Input:
		aaaaaaaaaaa
	Output 
		YES

Example Input/Output 2:
	Input:
		bbbbbbbbbbbbbcccccc
	Output: 
		NO
*/

#include<stdio.h> 
#include<stdlib.h>

int main()
{
	char a[1000]; 
	scanf("%s",a);
	int m=1;
	int k=0; 
	while(k<strlen(a)-1)
	{
		if(a[k]!=a[k+1])
			m=0;
		k++;
	} 
	printf(m?"YES":"NO");
}