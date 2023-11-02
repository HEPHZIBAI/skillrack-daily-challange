/*
Please fill in the lines of code to implement the logic present in the flowchart

Start
Declare an integer variable num
Read the value of num
Declare an integer variable unitDigit and assign num % 10 to it

Check if num > 9
	Replace num by num/10
	Declare an integer variable val and assign num 10 to it
Add unitDigit to val
	Print the value of val val

End
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	scanf("%d", &n); 
	int u=n%10; 
	while(n>9)
	{ 
		n/=10;
	}
	int v=n*10; 
	V+=U; 
	printf("%d",v*v);
}