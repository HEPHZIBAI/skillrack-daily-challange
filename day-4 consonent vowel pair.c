/*
The program must accept a string S as the input. The program must print all the pairs having a consonant followed by a vowel in the string S (in the order of occurrence) as the output.

Note: The string S always contains at least one pair having a consonant followed by a vowel.

Boundary Condition(s): 2<= Length of S <= 100

Input Format:

	The first line contains the string S.

Output Format:

	The first line contains all the pairs having a consonant followed by a vowel separated by a space.

Example Input/Output 1:

	Input:
		volcano
	Output:
		vo ca no

	Explanation:
		The string "volcano" contain three pairs having a consonant followed by a vowel So the pairs vo ca and no are printed as the output.

Example Input/Output 2:

	Input
		TELEVISION
	Output 
		TE LE VISI
*/



//answer


#include<stdio.h> 
#include<stdlib.h>
#include <string.h>
int main()
{
	char a[100];
	scanf("%s",a);
	int u=strlen(a);
	for (int i=0;i<u;i++)

	{
		if((a[i]!='a' && a[i]!='e' && a[i]!='i' && a[i]!='o' && a[i]!='u' && 
		a[i]!='A' && a[i]!='E' && a[i]!='I' && a[i]!='O' && a[i]!='U')&& 
		(a[i+1]=='A'||a[i+1]=='E'||a[i+1]=='I'||a[i+1]=='O'||a[i+1]=='U'||
		a[i+1]=='a'||a[i+1]=='e'||a[i+1]=='i'||a[i+1]=='o'||a[i+1]=='u'))

			printf("%c%c ",a[i],a[i+1]);
	}
}
