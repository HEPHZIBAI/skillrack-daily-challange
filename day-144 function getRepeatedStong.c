/*
You must implement the function getRepeatedString(char str[]) which accepts a string str as the input. The function must form a new string by repeating each character of str by exactly one time. Then the function must return the new string.

Example Input/Output 1:
	Input: 
		Gmail
	Output 
		GGmmaaiill

Example Input/Output 2:
	Input: 
		shampoo
	Output 
		sshhaammppoooo
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* getRepeatedString(char str[])
{
	char *s=malloc(1000);
	for(int i=0,c=0;i<strlen(str);i++,c+=2)
	{
		s[c]=str[i];
		s[c+1]=str[i];
	}
	return s;
}

int main()
{
	char str[101];
	scanf("%s", str);
	char *repStr = getRepeatedString(str);
	if(str==repStr)
	{
		printf("New string is not formed\n");
	}
	if(str[e] == '\0')
	{
		printf("String is empty");
	}
	printf("%s", repStr);
	return 0;
}