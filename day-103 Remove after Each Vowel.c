/*
The program must accept a string $ as the input. For each vowel CH in the string S (from left to right), the program must remove the next character of CH from the string S. Then the program must print the modified string as the output.

Boundary Condition(s):
	1 < Length of S<= 1000

Input Format:
	The first line contains S.

Output Format:
	The first line contains the modified string S.

Example Input/Output 1:
	Input:
		skillrack
	Output:
		skilrak
	Explanation:
		Here the string is skillrack.The first vowel in skillrack is i. The next character of i is I, so I is removed from the string skillrack. Now the string becomes skilrack The second vowel in skillrack is a. The next character of a is c, so c is removed from
the string skilrack. Now the string becomes skilrak. Finally, the modified string skilrak is printed as the output.

Example Input/Output 2:
	Input 
		Aerospace
	Output
		Aropae

Example Input/Output 3:
	Input: 
		Ael#oU123
	Output
		Alo123
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	char a[1000];
	scanf("%s",a);
	for(int i=0;i<strlen(a);i++)
	{
		printf("%c",a[i]);
		a[i]=tolower(a[i]);
		if(a[i]='a'||a[i]='e' ||a[i]='i'||a[i]=='o'||a[i]=='u')
			i++;
	}
}