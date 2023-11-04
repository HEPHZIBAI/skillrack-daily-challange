/*
Please fill in the lines of code to implement the logic present in the flowchart

Start
Declare two integer variables X and sum
Assign 0 to sum
Read the value of X

Check if X>0
	Add X % 1000 to sum
	Replace X by X/1000
Print the value of sum
End
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x,sum=0; 
	scanf("%d", &x); 
	while(x>0)
	{
		sum+=x%1000; 
		x/=1000;
	} 
	printf("%d", sum);
}