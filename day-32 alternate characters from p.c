/*
A string S and an integer P denoting the position of the starting character in S are passed as the input. The program must print the alternate characters in S starting from the position P.

Boundary Condition(s)
	1 <= Length of S <= 100 
	1 < P < Length of S

Input Format: 
	The first line contains S.
	The second line contains P.

Output Format: 
	The first line contains the alternate characters in S starting from the position P.

Example Input/Output 1:
	Input 
		abcdefghijkl
		4
	Output 
		dfhil
	
	Explanation:
		The 4th character in the string abc efghijld is So the alternate characters from the character d are printed as the output.

Example Input/Output 2:
	Input 
		operations
		3
	Output
		eain
*/

//answer


#include<stdio.h> 
#include<stdlib.h>
int main() 
{
	char a[101];
	int b;
	scanf("%s\n%d",a,&b); 
	b--;
	for(;b<strlen(a); b+=2) 
	{
		printf("%c", a[b]);
	}
}