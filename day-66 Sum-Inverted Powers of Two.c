/*
The program must accept an integer N as the input. The program must generate a sequence of integers containing the integers from 1 to N. Then the program must invert the sign of all the powers of 2 in the generated sequence. Finally, the program must print the sum of all the integers in the modified sequence as the output.

Boundary Condition(s): 
	1 <= N <= 10^4

Input Format: 
	The first line contains N.

Output Format:
	The first line contains the sum of all the integers in the modified sequence.

Example Input/Output 1:
	Input
		4
	Output:
		-4

Explanation:
	Here N=4, so the sequence is 1 2 3 4.
	After inverting the sign of all the powers of 2, the sequence becomes -1 -23-4. Now the sum of integers in the sequence is -4.
	Hence the output is -4

Example Input/Output 2:
	Input: 
		10
	Output
		25
*/


#include<stdio.h> 
#include<stdlib.h>
int main()
{
	int n;
	scanf("%d", &n);
	int k=1;
	int s=0;
	for (int i=1;i<=n;i++)
	{
		if(i==k)
		{
			k*=2; 
			S=S+ (i*-1);
		}
		else
		{
			S+=(i);
		}
	} 
	printf("%d\n",s);
}