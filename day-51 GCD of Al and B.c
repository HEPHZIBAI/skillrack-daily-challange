/*
The program must accept two integers A and B as the input. The program must print the GCD (Greatest Common Divisor) of A! and B! as the output.
Note:
	A! represents the factorial of A
	B! represents the factorial of B.

Boundary Condition(s) 
	1 <= A B <= 20

Input Format:
	The first line contains A and B separated by a space.

Output Format:
	The first line contains the GCD of (A!) and (B!).

Example Input/Output 1:
	Input
		43
	Output
		6
	Explanation:
		4!-4x3x2x1 = 24
		3!=3x2x1-6
		The GCD of 24 and 6 is 6. So 6 is printed as the output.

Example Input/Output 2:
	Input 
		4 5
	Output:
		24
*/



#include<stdio.h> 
#include<stdlib.h>
int main()
{
	int a,b; 
	scanf("%d %d",&a,&b); 
	Long int r; 
	Long int x=1,y=1;
	while(a>0)
	{
		x=a;
		a--;
	}
	while (b>0)
	{
		y*=b; 
		b--;
	} 
	if(x<y)
		r=x;
	else
		r=y;

	while(r>0)
	{
		if(x%r==0 && y%г==0)
		break;
		r--;
	} 
	printf("%ld",r);
}