/*
Start
	Declare three integer variables N, X and Y
	Read the values of N, X and Y
	Declare an integer variable ctr and assign 1 to it

	Check if ctr<=N
		Check if X % ctr == 0 or Y % ctr == 0
			Check if X% Y == 0 or Y % X == 0
				Print the value of ctr
	Increment the value of ctr by 1
	Print the value of N
End
*/

#include<stdio.h>;
#include<stdlib.h>;

int main()
{
	int n,x,y;
	scanf("%d%d%d",&n,&x,&y);
	int ctr=1;
	
	while(ctr<n)
	{
		if(x%ctr==0 | | y%ctr==0)
		{
			if(x%y==0 || y%x==0)
			{
				printf("%d",ctr);
			}
		}
		ctr++;
	}
	printf("%d",n);
}