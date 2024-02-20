/*
Please fill in the lines of code to implement the logic present in the flowchart.

Start
	Declare a char array str of size 101
	Read the value of str
	Declare two integer variables len and index
	Assign length of the string to len and assign 0 to index
	
	check if index < len
		check if str[index] >= 'a'
			check if str[index] <= 'j'
				Print the value of str[index]
		Print Asterisk

	Increment the value of index by 1
End

*/


﻿

#include<stdio.h>
#include<stdlib.h>

int main()
{
	char str[101];
	scanf("%s", str);
	int len, index;
	len=strlen(str);
	index=0;
	
	while(index<len)
	{
		if(str[index]>='a')
		{
			if(str[index]<='j')
			{
				printf("%c",str[index]);
			}
			else
			{
				printf("*");
			}
		}
		else
		{
			printf("*");
		}
		index++;
	}
}

