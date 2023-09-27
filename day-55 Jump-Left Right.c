/*
A boy is currently at the point 0 on a coordinate axis. He jumps by the following rules.

The first jump is X units to the right, the second jump is Y units to the left, the third jump is X units to the right, the fourth jump is Y units to the left and so on. The program must accept three integers X, Y and K as the input. The program must print the position of the boy after K jumps as the output.

Boundary Condition(s): 
	1 <= X, Y, K<= 10^9
Input Format:
	The first line contains X, Y and K separated by a space.

Output Format:
	The first line contains the position of the boy after K jumps.

Example Input/Output 1:
	Input 
		5 2 3
	Output
		8
	Explanation:
		Here X-5, Y=2 and K=3.
		In the first jump, the boy jumps 5 units to the right. Now the current position of the boy is 5 (0+5).
		In the second jump, the boy jumps 2 units to the left. Now the current position of the boy is 3 (5-2).
		In the third jump, the boy jumps 5 units to the right. Now the current position of theboy is 8 (35) 
		The final position of the boy is 8 (after 3 jumps). So 8 is printed as the output.

Example Input/Output 2: 
	Input:
		100 1 4
	Output
		198

*/


#include<stdio.h> 
#include<stdlib.h>

int main()
{
	Long int x,y,k;
	scanf("%ld %ld %ld", &x,&y,&k);
	Long int l=1; 
	Long int d=0;
	while(k>0)
	{
		if(l%2!=0)
			d+=x;
		else
			d-=y;
		k--;
		l++;
	}
	printf("%ld",d);
}