/*
You must implement the function concatenateFirstAndLastXDigits(int N, int X) which accepts two integers N and X as the input. The function must form an integer K by concatenating the first and the last X digits of N. Then the function must return the integer K.

Example Input/Output 1:
	Input:
		67817490 3
	Output:
		Integer: 678490
	Explanation:
		The first 3 digits of the integer 67817490 are 6 7 8.
		The last 3 digits of the integer 67817490 are 4 9 0.
		The integer K formed by concatenating the first and last 3 digits of 67817490 is 678490.

Example Input/Output 2:
	Input:
		2000 2
	Output:
		Integer: 2000

Example Input/Output 3:
	Input:
		67904 5
	Output:
		Integer: 678490
	Explanation:
		The first 3 digits of the integer 67817490 are 6 7 8.
		The last 3 digits of the integer 67817490 are 4 9 0.
		The integer K formed by concatenating the first and last 3 digits of67817490 is 678490.

Example Input/Output 2:
	Input:
		2000 2
	Output:
		Integer: 2000

Example Input/Output 3:
	Input:
		67904 5
	Output:	
		Integer: 6790467904

*/
#include <stdio.h>
#define ULL unsigned long long int
ULL concatenateFirstAndLastXDigits(int N, int X)
{
	ULL a=0;
	int y[10000001];
	int k=0;
	while(N>0)
	{
		y[k]=N%10;
		k+=1;
		N/=10;
	}
	k--;
	int h=k;
	
	for(int i=0;i<X && h>=0;i++)
	{
		a*=10; 
		a+=y[h];
		h--;
	}
	for(int i=0;i<x;i++)
	{
		a*=10;
		a+=y[i];
	}
	return a;
}

int main()
{
	int N, X;
	scanf("%d %d",&N,&X);
	printf("Integer: %llu", concatenateFirstAndLastXDigits (N, X);
	return 0;
}


