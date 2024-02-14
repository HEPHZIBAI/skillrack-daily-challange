/*
You must implement the function getSecondLargestDigit (int N) which accepts an integer N as the input. The function must return the second largest digit in N. If there is no such digit in N, the function must return -1.

Boundary Condition(s):
	10 <= N <= 10^8

Example Input/Output 1:
	Input:
		24324
	Output:
		Second Largest Digit: 3
	Explanation:
		The 2nd largest digit in 24324 is 3.

Example Input/Output 2:
	Input: 
		22
	Output:
	Second Largest Digit: -1
*/

﻿

#include <stdio.h>

int getSecondLargestDigit(int N)
{
	int s=-1;
	int l=-1; 
	
	while(N>0)
	{
		int k=N%10;
		if(k>1)
		{
			s=1;
			l=k;
		}
		else if(l!-k &&_s<k)
		{
			s=k;
		}
		N/=10;
	}
	if(s==-1)
		return -1;
	return s;
}
int main()
{
	int N;
	scanf("%d", &N);
	printf("Second Largest Digit: %d", getSecondLargestDigit(N));
}