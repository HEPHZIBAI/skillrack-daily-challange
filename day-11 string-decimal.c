/*
The program must accept a string & containing only a and b as the input. The program must form the binary represention of an integer X by replacing a by 1 and b by 0 in the string S. Then the program must print the value of % as the output
Boundary Condition(s): 1 < Length of S <= 30
Input Format:
	The first line contains the string S.
Output Format: 
	The first line contains the integer X.
Example Input/Output 1:
	Input:
		aabba
	Output: 
		25
	Explanation:
		After replacing all the occurrences of a by 1 and b by 0, the string becomes 11001. So the decimal equivalent of (11001)2 is 25. Hence the output is 25

Example Input/Output 2
	Input
		abbaaba
	Output
		77
*/


//answer


#include<stdio.h> 
#include<stdlib.h>
int main()
{
	char a[30]; 
	scanf("%s",a);
	int n[strlen(a)];
	for (int i=0;i<strlen(a);i++)
	{
		if(a[i]=='a') 
			n[i]=1; 
		else
			n[i]=0;
	} 
	int y-strlen(a)-1,t-1,s=0; 
	while(y>=0)
	{
		s=s+(n[i]+t);
		y--;
		t+=2;
	}
	printf("%d",s);
}