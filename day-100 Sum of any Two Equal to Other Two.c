/*
The program must accept four integers as the input. The program must print YES if the sum of any two integers is equal to the sum of the remaining integers. Else the program must print NO as the output.

Boundary Condition(s):
	1 <= Each integer value <= 10^7

Input Format:
	The first line contains four integers separated by a space.

Output Format:
	The first line contains YES or NO.

Example Input/Output 1:
	Input
		2 3 1 4
	Output
		YES

Explanation:
	The sum of 2 and 3 is 5. 
	The sum of 1 and 4 is 5. 
	Here, both results are the same. 
	Hence the output is YES

Example Input/Output 2:
	Input
		3 5 8 2
	Output:
		NO
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a,b,c,d; 
	scanf("%d%d%d%d",&a,&b,&c,&d); 
	if((a+b+c+d)%2==0)
	{
		if(a+b==c+d || b+c=-a+d || a+c=b+d) 
			printf("YES");
		else 
			printf("NO");
	} 
	else 
		printf("NO");
}