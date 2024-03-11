/*
The program must accept a string S as the input. The program must remove the consecutively repeated
characters in the string S. Then the program must print the modified string S as the output.

Note: At least one consecutively non-repeated character is always present in the string S.

Boundary Condition(s):
	3<=length of s<=1000

Example Input/Output 1:
	Input:
		bookkeeping
	Output:
		bping
*/


#include<stdio.h>
#include<stdlib.h>

int main()
{
	char a[1000];
	scanf("%s",a);
	int i=0;
	if(a[i]!=a[i+1])
		printf("%c",a[i]);
	i+=1;
	while(i<strlen(a)-1)
	{
		if(a[i]!=a[i-1] && a[i]!=a[i+1])
			printf("%c",a[i]);
		i+=1;
	}
	if(a[i]!=a[i-1])
		printf("%c",a[i]);
}
