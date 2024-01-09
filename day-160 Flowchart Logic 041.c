/*
Please fill in the lines of code to implement the logic present in the
flowchart.

Start
	Declare four integer variables N, currNum, total and ctr
	
	Assign 0 to total and 1 to ctr
	
	Read the value of N

	Check if ctr <= N
		
		Read the value of currNum

		Check if currNum % 2 == 0
		yes
			Replace total by total + currNum
		No
			Replace total by total - currNum	

		
		increment the value of ctr by 1

	Print the value of total
End

*/


#include <stdio.h>

int main() 
{
	int n,cn,t,ctr;
	t=0;
	ctr=1;
	while(ctr<=n)
	{
		scanf("%d",&cn);
		if(cn%2==0)
			t+=cn;
		else
			t-=cn;
		ctr++;	
	}
	printf("%d",t);
}
