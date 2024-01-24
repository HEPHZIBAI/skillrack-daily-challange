/*
You must implement the function getOddEvenString(int N) which accepts an integer N as the input. The function must form a string S by replacing each odd digit of N by "o" and each even digit of N by "e" Then the function must return the string S.

Example Input/Output 1:	
	Input:
		147
	Output:
		oeo
	Explanation:
		The first digit of 147 is odd. So 'o' is present as the first character of S. 
		The second digit of 147 is even. So 'e' is present as the second character of S.
		The third digit of 147 is odd. So 'o' is present as the third character of S. 
		So the string S is 'oeo'

Example Input/Output 2: 
	Input:
		205070
	Output:
		eeoeoe

*/


#include <stdio.h>
#include <stdlib.h>

char* getOddEvenString(int N)
{
	char* b=(char*)malloc(sizeof(char)*10);
	int i=0;
	while(N&gt;0)
	{
		int k=N%10;
		if(k%2==0) 
			b[i++]='e';
		else 
			b[i++]='o';
		N/=10;
	}

	for (char j=0;j<i/2;j++)
	{
		char q=b[j];
		b[j]=b[i-j-1];
		b[i-j-1]=q;
	}
	return b;
}

int main()
{
	int N;
	scanf("%d", &N);
	char *str = getOddEvenString(N);
	if(str[0] =='\0')
		printf("String is empty\n");

	printf("%s", str);
}