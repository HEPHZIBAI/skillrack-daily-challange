/*
Start

Declare three Integer variables X, Y and val
Assign 0 to val
Read the values of X and Y

Check if X > 0 and Y> 0	
	Yes
	Replace val by val * 10
	Add X % 10 to val
	Replace val by val * 10
	Add Y % 10 to val
	Replace X by X/10
	Replace Y by Y/10
no
a()

a:
Check if X>0
	Yes
	Replace val by val * 10
	Add X % 10 to val
	Replace X by X/10
no
b()

b:

Check if Y>0
	Yes
	Replace val by val * 10
	Add Y % 10 to val
	Replace Y by Y/10
NO
	print value
*/

#include<stdio.h>
#include<stdlib.h>
int x,y,val=0;
void b()
{
	while(y>0)
	{
		val*=10;
		val+=(y%10);
		y/=10;
	}
	printf("%d",val);
}

void a()
{	
	while(x>0)
	{
		val*=10;
		val+=(x%10);
		x/=10;
	}
	b();
}

int main()
{
	scanf("%d%d", &x,&y);
	while(x>0&& y>0)
	{
		val=val*10;
		val+=(x%10);
		val=val*10;
		val+=(y%10);
		x/=10;
		y/=10;
	}
	a();
}