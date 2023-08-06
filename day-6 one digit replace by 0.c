/*
The program must accept an integer N as the input. The program must replace all the occurrences of the unit digit of N by 0 in the integer N. Finally, the program must print the modified value of N as the output.

Boundary Condition(s)

	1 <= N <= 10^8

Input Format: 
	
	The first line contains the value of N.

Output Format: 

	The first line contains the modified value of N.

Example Input/Output 1:

	Input 
		1021

	Ouput 
		20

	Explanation: 
		The unit digit of 1021 is 1.

		So after replacing all the occurrence of 1 by 0, the integer becomes 0020.

		Hence the output is 20

Example Input/Output 2:

	Input 
		202202

	Ouput
		0
*/



//anaswer

#include<stdio.h> 
#include<stdlib.h>

int main()

{

	int n; 
	scanf("%d",&n); 
	int k=0; 
	int a[10000000]; 
	int m=n%10;
	while(n>0)
	{
		if(n%10==m)
			a[k]=n%10;
		else
			a[k]=0;
		k++;
		n/=10;
	}
	k--;
	while(a[k]==0 && k>0)
	{
		k--;
	} 
	for(;k>=0;k--) 
	{
		printf("%d",a[k]);
	}
}