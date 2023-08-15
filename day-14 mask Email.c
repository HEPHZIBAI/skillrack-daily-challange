/*
A string S representing the email of a user is passed as the input. The program must secure the email by masking vowels and digits with asterisk and print the resulting masked string value M as the output.
Boundary Condition(s): 5<= Length of S <= 100
Input Format:
	The first line contains S.
Output Format: 
	The first line contains M.
Example Input/Output 1:
	Input 
		your5name_007@gmail.com
	Output
		y**r*n*m*_***@gm**l.c*m
Example Input/Output 2:
	Input 
		AS34DFq65werx7cm0v@red@rediffmail.com
	Output
		"S"DFq**w*n*cm*v@rd@rd ffm "Lem
*/


//answer


#include<stdio.h> 
#include<stdlib.h>
int main()
{
	char a[100]; 
	scanf("%s",a); 
	for(int i=0;i<strlen(a); i++)
	{
		if((a[i]>='0'&&a[i]<='9') || (a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U'))
			printf("*");
		else 
			printf("%c",a[i]);

}