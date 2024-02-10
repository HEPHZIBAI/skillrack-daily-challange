/*
Please fill in the lines of code to implement the logic present in the flowchart.

	Start
	Declare a char array S of size 101
	Read the value of S
	Declare two integer variables index and count
	Assign 0 to index and Assign 0 to count

	Check if S[index] != '\0'

		Increment the value of count by 1
		
		Check if S[index] != S[index+1]
			Print the value of S[index] and count
			Assign 0 to count

		Increment the value of index by 1
	End
*/


#include<stdio.h>
#include<stdlib.h>

int main()
{
	char a[101];
	scanf("%s",a); 
	int i=0,count=0;
	
	while(a[i]!= '\0')
	{
		count++;
		if(a[i]!=a[i+1])
		{
			printf("%c%d",a[i],count);
			count=0;
		}
		i++;
	}
}
