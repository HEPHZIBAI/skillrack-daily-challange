/*
The program must accept an integer N as the input. The program must form an integer X which is equal to the binary representation of N. Then the program must print the binary representation of X as the output.

Boundary Condition(s): 
	1 <= N <= 1000

Input Format:
	The first line contains N.

Output Format
	The first line contains the binary representation of X.

Example Input/Output 1:
	Input 
		6
	Output 
		1101110
	Explanation
		The binary representation of 6 is 110. 
		So the value of X is 110 and its binary representation is 1101110
		Hence the output is 1101110

Example Input/Output 2:
	Input:
		13
	Output: 
		10001001101
*/


#include<stdio.h>
#include<stdlib.h>

int main()
{
	int n;
	scanf("%d",&n); 
	int a[10000000]; 
	int k=1,f; 
	int h=0; 
	while(n>0)
	{
		f=n%2;
		h=(k*f)+h; 
		n/-2; 
		k*=10;
	}
	printf("%d\n",h);
	k=0;
	while(h>0)
	{
		a[k]=h%2;
		k++;
		h/=2;
	}
	for(int i=k-1;i>=0;i--)
		printf("%d",a[i]);
}