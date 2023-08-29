/*
The program must print the count of the factors of a given integer N. Please fill in the code in the blanks so that the program executes successfully.

Example Input/Output 1:

Input:
	4
Output:
	3
Example Input/Output 2
	Input 
		100
	Output
		9



#include <stdio.h>
int main()
{
	int N,________;
	scanf("%d",&N); 
	for (int ctr=1; ctr <= N/2; ctr++)
	{
		if(N%ctr == 0)
		{
			____________
		}
	}	
	printf("%d", factorCount); 
	return 0;
}
*/



//answer


#include <stdio.h>
int main()
{
	int N,factorCount=1;
	scanf("%d",&N); 
	for (int ctr=1; ctr <= N/2; ctr++)
	{
		if(N%ctr == 0)
		{
			factorCount+=1;
		}
	}	
	printf("%d", factorCount); 
	return 0;
}
