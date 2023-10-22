/*
Please fill in the lines of code to implement the logic present in the flowchart.

	Start
	Declare two integers variables N and X
	Read the value of N and X
	Assign N-(NX) to N
	
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,x; 
	scanf("%d%d", &n,&x); 
	n=n-(n%x);
	while(n>0)
	{
		printf("%d ",n); 
		n=n-x;
	}
}