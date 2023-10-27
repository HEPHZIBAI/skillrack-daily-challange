/*

Please fill in the lines of code to implement the logic present in the flowchart.
	Start
	Declare four integer vanables N. X. Y and maxSum
	Assign 0 to maxSum
	Read the value of N
	Declare an integer variable ctr and assign 1 to it
No	Check if ctr< N/2
		Yes
		Read the values of X and Y
	check if X+Y > maxSum
		Yes
no		Assign XY to maxSum

	Increment the value of ctr by 1
	Print the value of maxSam
	End
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,x,y,maxsum=0; 
	scanf("%d", &n); 
	int ctr=1;
	while(ctr<=n/2)
	{
		scanf("%d %d", &x,&y); 
		if(x+y>maxsum) 
			maxsum=x+y; 
		ctr++;
	} 
	printf("%d", maxsum);
}