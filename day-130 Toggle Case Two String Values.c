/*
The program must accept two string values $1 and $2 are of equal length as the input. The string S1 contains only alphabets and the string 52 contains u or I (in both lower case and upper case). For each alphabet CH in the string S2, the program must toggle the case of the alphabet at the same position in the string S1 based on the following conditions.
- If CH is u or U, the program must convert the corresponding alphabet in S1 to upper case.
- If CH is I or L, the program must convert the corresponding alphabet in S1 to lower case.
Finally, the program must print the modified string $1 as the output.

Boundary Condition(s): 
	1 <= Length of S1, S2 <= 1000

Input Format:
	The first line contains S1.
	The second line contains S2.

Output Format: 
	The first line contains the modified string S1.

Example Input/Output 1:
	Input: 
		book
	Output
		Book
	Explanation:
		The first alphabet in S2 is u. So the first alphabet in S1 must be in the upper case. Now the S1 becomes Book
		The second alphabet in S2 is L. So the second alphabet in S1 must be in the lower case.
		Now the S1 remains the same Book (as o is already in lower case). The third alphabet in S2 is L. So the third alphabet in S1 must be in the lower case. Now the S1 remains the same Book (as o is already in lower case).
		The fourth alphabet in S2 is U. So the fourth alphabet in S1 must be in the upper case.
		Now the S1 becomes Book. Hence the output is Book

Example Input/Output 21
	Input
		GOOOOGLE
		lululUUL
	Output
		gOoOoGLe
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{
	char a[1001],b[1001];
	scanf("%s\n%s",a,b);
	for(int i=0;i<strlen(a);i++)
	{
		if(b[i]=='u' || b[i]=='U') 
		{
			printf("%c", toupper(a[i]));
		}
		else
		{ 
			printf("%c",tolower(a[i]));
		}
	}
}