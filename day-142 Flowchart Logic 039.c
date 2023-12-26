/*
Please fill in the lines of code to implement the logic present in the flowchart.

Start
	Declare two integer variables X and Y
	Read the values of X and Y

	Check if X<Y
		Print the value of X%10
		Print the value of Y%10
		Replace the value of X by X/10
		Replace the value of Y by Y/10
End

Note: The value of X is always less than Y.
*/


#include<stdio.h>
#include<stdlib.h>

int main()
{
	int x,y; 
	scanf("%d%d",&x,&y); 
	while(x<y)
	{
		printf("%d",x%10); 
		printf("%d",y%10); 
		x/=10; 
		y/=10;
	}
}