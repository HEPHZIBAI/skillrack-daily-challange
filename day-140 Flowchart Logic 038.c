/*
Please fill in the lines of code to implement the logic present in the flowchart

Start
	Declare two integer variables X and Y
	Read the values of X and Y
	Declare an integer variable ctr and assign the value of X to it
	
	Check it Ctr<=Y
		Check if ctr%X == 0
			increment the value of ctr by 1
		Check if ctr%10 == Y%10
			increment the value of ctr by 1
		Print the value of ctr
		
		increment the value of ctr by 1

End
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
	int x,y,ctr;
	scanf("%d%d",&x,&y);
	ctr=x;
	while(ctr<=y)
	{
		if(ctr%x==0)
		{
			ctr++;
		}
		else if(ctr%10==y%10)
		{
			ctr++;
		}
		else
			printf("%d ",ctr++);
	}
}