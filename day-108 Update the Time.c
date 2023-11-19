/*
The program must accept a time T (in 24hr format HH:MM) and an integer X as the Input. The program must update the time T by adding X minutes to it. Then the program must print the updated time T in the same 24hr format as the output.

Boundary Condition(s):
	0 <= HH <= 23
	0 <= MM <=60
	1<= X <= 10^8

Input Format:
	The first line contains T. 
	The second line contains X

Output Format:
	The first line contains the updated time T.

Example Input/Output 1:
	Input 
		08:15
		20
	Output
		08:35
	Explanation:
		Here, HH-08, MM-15 and X=20. After adding 20 minutes, the time T becomes 08:35 So 08:35 printed as the output.

Example Input/Output 2:
	Input
		23:50
		15
	Output
		00:05
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int a,b,x; 
	scanf("%d:%d %d", &a,&b,&x); 
	int c=b+x; 
	while(c>=60)
	{
		a++; 
		c=c-60;
	} 
	while (a>=24) 
		a=a-24; 
	printf("%02d:%02d",a,c);
}