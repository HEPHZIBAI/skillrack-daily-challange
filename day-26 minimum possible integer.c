/*
The program must accept two integers N and K as the input. The program must print the minimum possible integer X which can be obtained by modifying at most K digits in N as the output.

Note: The number of digits in N and X should be equal without any leading zeros.

Boundary Condition(s) 1 <= N <= 10^7 1 <= K <= 7

Input Format:
	The first line contains N. The second line contains K.

Output Format: 
	The first line contains X

Example Input/Output 1:
	Input 
		51528
		3
	Output 
		10028
	Explanation:
		The minimum possible integer is obtained by modifying the first three digits of The first digit of $1528 is changed to 1.51528
		The second digit of $1528 is changed to 0.
		The third digit of 51528 is changed to Q
		Hence the output is 10028

Example Input/Output 2: 
	Input
		10504
		2
	Output 
		10000
*/




//answer

#include<stdio.h> 
#include<stdlib.h>
int main()
{
	int n,l;
	scanf("%d %d", &n, &l); 
	int a[1000000];
	int k=0;
	while(n>0)
	{
		a[k]=n%10;
		k++;
		n/=10;
	}
	if(a[k-1]>1)
	{
		a[k-1]=1; 
		l--;
	}
	for (int i=k-2;i>=0; i--)
	{
		if(l==0)
			break;
		if(a[i]!=0)
		{
			a[i]=0;
			l--;
		}
	}
	for(int i=k-1;i>=0;i--)
	{
		printf("%d",a[i]);
	}
}


