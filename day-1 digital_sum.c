/*
The program must accept an integer N as the input. The program must compress the integer N by concatenating the digital sum of every two consecutive digits. Then the program must print the modified value of N as the output.

Boundary Condition(s): 10 <= N <= 10^9

Input Format:

	The first line contains the value of N.

Output Format:

	The first line contains the modified value of N.

Example Input/Output 1:

	Input:

		208914

	Output: 

		28815

	Explanation:

		The digital sum of 2 and 0 is 2 The digital sum of 0 and 8 is 8

		The digital sum of 8 and 9 is 8

		The digital sum of 9 and 1 is 1 The digital sum of 1 and 4 is 5 Hence the output is 28815

Example Input/Output 2: 
	Input 

		1234

	Output: 

		357
*/

answer:
	#include<stdio.h>
	int main()
	{
		long int n;
		scanf("%ld",&n);
		int k=0;
		int a[10000000]; 
		while(n>0)
		{
			a[k]=n%10;
			n/=10;
			k++;
		}
		k--;
		int m,o; 
		for(;k>=1;k--)
		{
			m=a[k]+a[k-1];
			if(m>9)
			{
				o=m%10;
				m/=10;
				o=o+m;
				m=o;
			}
			printf("%d",m);
		}
	}
