/*
The program must accept N distinct integers as the input. The program must print the maximum possible absolute difference between two consecutive integers in the given N integers as the output.

Boundary Condition(s):
	2 <= N <= 1000
	1 <= Each integer value <= 10^8

Input Format:
	The first line contains N.The second line contains N distinct integers separated by a space.
	
Output Format:
	The first line contains the maximum absolute difference between theconsecutive two integers.

Example Input/Output 1:
	Input:
		5
		1 4 7 2 6
	Output
		5
	Explanation:
		The given 5 integers are 1, 4, 7, 2, and 6. 
		The absolute difference between 1 and 4 is 3. 
		The absolute difference between 4 and 7 is 3. 
		The absolute difference between 7 and 2 is 5. 
		The absolute difference between 2 and 6 is 4. 
		Here the maximum absolute difference is 5. 
		Hence the output is 5

Example Input/Output 2:
	Input:
		4
		10 2 3 11
	Output: 
		8 
*/
#include<stdio.h>
#include<stdlib.h>

int main()
{	
	int n;
	scanf("%d",&n);
	int l=0;
	int a[n];
	for(int i=0;i<n;i++)
	{
		scanf("%d", &a[i]);
		if(i!=0)
		{
			int m=abs(a[i]-a[i-1]); 
			if(m>1)
				l=m;
		}
	}
	printf("%d", l);
}