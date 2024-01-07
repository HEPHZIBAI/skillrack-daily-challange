/*
You must implement the function getAllDigitsAsUnitDigit(int N) which accepts an integer N as the input. The function must form an integer X by replacing all the digits of N with the unit digit of N. Then the function must return the integer X.

Boundary Condition(s): 
	1 <= N <= 10^8

Example Input/Output 1: 
	Input
		1879
	Output: 
		Integer:9999
	Explanation:
		The unit digit of 1879 is 9. So the Integer X is formed by replacing all the digits of 1879 with 9.
		Hence the integer X is 9999

Example Input/Output 2:
	Input: 
		150
	Output
		Integer: 0


*/

#include <stdlib.h>
#include <stdio.h>

int getAllDigitsAsUnitDigit(int N)
{
	int exit; //Do not use exit function
	int X, U=N%10;
	while(N!=0) 
	{
		X=X*10+U;
		N/=10;
	}
	return X;
}

int main()
{
	int N;
	scanf("%d", &N);
	printf("Integer: %d", getAllDigitsAsUnitDigit(N));
	return 0;
}