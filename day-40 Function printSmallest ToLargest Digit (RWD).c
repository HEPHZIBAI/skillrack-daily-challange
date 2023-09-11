/*
You must implement the function printSmallestToLargestDigit(int N) which accepts an integer N as the input. The function must print all the digits from the smallest digit to the largest digit in N as the output.

Example Input/Output 1:
	Input
		65247
	Output 
		234567
	Explanation:
		The smallest digit in 65247 is 2.
		The largest digit in 65247 is 7.
		So, all the digits from 2 to 7 are printed as the output.

Example Input/Output 2: 
	Input
		555
	Output
		5

#include <stdio.h> 
#include <stdlib.h>




int main()
{
	int N; 
	scanf("%d",&N);
	printsmallestToLargestDigit(N);
	return 0;
}

*/

#include <stdio.h> 
#include <stdlib.h>
#include<limits.h> 
void printSmallestToLargestDigit(int N)
{
	int a=0;
	int b=INT_MAX;
	while (N>0)
	{
		int f=N%10;
		if(f>a)
			a=f; 
		if(f<b)
			b=f;
		N/=10;
	}
	for(;b<=a;b++)
		printf("%d,b);
}
int main()
{
	int N; 
	scanf("%d",&N);
	printsmallestToLargestDigit(N);
	return 0;
}