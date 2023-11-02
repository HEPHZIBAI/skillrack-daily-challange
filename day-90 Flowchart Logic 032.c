/*

Please fill in the lines of code to implement the logic present in the flowchart.

Start
Declare three integer variables N, sum and temp
Read the value of N
Assign N to temp
Assign 0 to sum

Check if temp != 0
	Add temp % 10 to sum
	Replace temp by temp / 10

Check if N% sum == 0
	yes
		Print YES
	no
		Print NO
End
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{	
	int n,sum, temp; 
	scanf("%d", &n); 
	temp=n; 
	sum=0;
	while(temp!=0)
	{
		sum+=(temp%10); 
		temp/=10;	
	} 
	if(n%sum==0) 
		printf("YES");
	else 
		printf("NO");
}