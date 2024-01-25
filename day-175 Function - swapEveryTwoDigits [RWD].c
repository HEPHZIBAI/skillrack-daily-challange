/*
You must implement the function swapEveryTwoDigits(int N) which accepts an integer N as the input. The function must form a new integer by swapping every pair of digits. Then the function must return the new integer. If the number of digits in N is odd, the last digit of N remains the same as there is no pair.

Example Input/Output 1:
	Input:
		12432
	Output:
		Integer: 21342
	Explanation:
		The first pair of digits is (1, 2). After swapping those digits, the integer becomes 21432.
		The second pair of digits is (4, 3). After swapping those digits, the integer becomes 21342.
		The last digit 2 has no pair. So the integer remains as it is.
		Hence the output is Integer: 21342

Example Input/Output 2:
	Input:
		905625
	Output:
		Integer: 96552

Example Input/Output 3:
	Input:
		8658
	Output:
		Integer: 6885
*/


#include <stdio.h>
int swapEveryTwoDigits (int N)
{
	int a=0;
	int b[10000001]; int k=0;
	while (N>0)
	{
		b[k]=N%10;
		N/=10;
		k+=1;
	}
	k-=1;
	for(int i=k;i&gt;0;i-=2)
	{
		a+=b[i-1];
		a*=10;
		a+=b[i];
		a*=10;
	}
	if(k%2==0)
		a+=b[0];
	else
		a/=10;
	return a;
}
int main()
{
	int N;
	scanf("%d", &N);
	printf("Integer: %d", swapEveryTwoDigits(N));
}