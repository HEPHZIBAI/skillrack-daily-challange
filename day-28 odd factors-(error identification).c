/*
The program given below must accept an integer N and must print only the odd factors of N separated by a space.

There is a logical error in the program and hence it does not print the desired output. Please rectify the logical error so that the program prints the expected output.


#include<stdio.h>
int main()
{
	int N;
	scanf("%d",&N); 
	for (int ctr=1; ctr < N; ++ctr)
	{
		if(N%ctr == 0)
			if (N%2 = 0)
				//Odd Factor. So print the output. 
				printf("%d ",ctr);

			//Even factor. So dont print continue;
		else
	} 
	return 0;
}
*/



#include<stdio.h>
int main()
{
	int N;
	scanf("%d", &N);
	for (int ctr=1; ctr <= N; ++ctr)
	{
		if(N%ctr==0)
		{
			if(ctr%2 != 0)
				printf("%d",ctr);
		}
	}
	return 0;
}