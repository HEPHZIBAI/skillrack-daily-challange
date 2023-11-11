/*
Please fill in the lines of code to implement the logic present in the flowchart.

Start
	Declare an integer variable N
	Read the value of N
	Declare an integer variable temp and assign N to it
	Declare an integer vanable namoDigits and assign 0 to it
	
	check if temp>0
		Increment numOfDigits by 1
		Replace temp by temp/10
	
	Declare an integer variable tenPowerVal
	tenPowerVal=getPower(10, numOfDigits/2)

	Check if N/tenPowerVal==N%tenPowerVal
		yes
			Print YES
		no
			Print NO
END

getPower(integer X,Integer Y)
	Declare an integer variable powerval and assign 1 to it
	
	Check if y>0
		Replace powerval by powerval*X
		Decrement y by 1
	return powerVal
*/
#include<stdio.h>
#include<stdlib.h>

int gp(int x, int y)
{
	int pv=1;
	while(y>0)
	{
		pv*=x;
		y--;
	}
	return pv;
}

int main()
{
	int n;
	scanf("%d", &n);
	int t=n;
	int nod=0;
	while(t>0)
	{
		nod++;
		t/=10;
	}
	int tpv=gp(10,nod/2);
	printf(n/tpv==n%tpv?"YES": "NO");
}