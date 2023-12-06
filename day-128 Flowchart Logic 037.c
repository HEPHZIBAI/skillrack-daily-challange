/*
Please fill in the lines of code to implement the logic present in the flowchart.

Start
	Declare two integer variables X and Y
	Read the values of X and Y
	Declare an integer variable ctrl and assign 1 to it
	Declare an integer variable ctr2 and assign Y to it

	Check if ctrl<=x or ctr2>=1
		Check if ctr1<=x
			print the value of ctr1
			increment the value of ctr1 by 1
		check if ctr2>=1
			print the value of ctr2
			decrement the value of ctr2 by 1
end
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x,y;
	scanf("%d%d",&x,&y);
	int ctr1=1;
	int ctr2=y;
	while(ctr1<=x || ctr2>=1)
	{
		if(ctr1<=x)
		{
			printf("%d ",ctr1); 
			ctrl++;
		}
		if(ctr2>=1)
		{
			printf("%d ",ctr2); 
			ctr2--;
		}
}