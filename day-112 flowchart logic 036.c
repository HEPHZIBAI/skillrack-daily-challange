/*
Start
	Declare two integer variables M and N
	Read the values of M and N
	Print the integer value which is returned by getNumberOfBinaryOnes(MN)

End

getNumberOfBinaryOnes (integer N)
	Declare an integer variable onesCount and assign 0 to it
	Check if n>0
		Add N % 2 to onesCount
		Replace N by N/2
	Return the value of onesCount
*/

#include<stdio.h>
#include<stdlib.h>

int get(int n)
{
	int one=0;
	while(n>0)
	{
		one+=(n%2);
		n/=2;
	}
	return one;
}

int main()
{
	int m,n;
	scanf("%d%d",&m,&n); 
	printf("%d",get(m^n));
}