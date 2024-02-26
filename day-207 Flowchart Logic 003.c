/*
Please fill in the lines of code to implement the logic present in the flowchart.

Start
	Declare two integer variables X and Y
	Read the values of X and Y
﻿	Check if X <= Y
		Print the value of X
		Increment the value of X by 1
End
*/


#include<stdio.h> 
#include<stdlib.h>

int main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	while(x<=y)
	{
		printf("%d ",x);
		x+=1;
	}
}
