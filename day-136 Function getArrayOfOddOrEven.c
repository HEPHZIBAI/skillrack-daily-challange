/*
You must implement the function getArrayOfOddOrEven (int N) which accepts an integer N as the input. The function must form an integer array of size N. Then the function must fill the array based on the following conditions.
-If N is odd, the function must fill the array with first N odd integers. 
-If N is even, the function must fill the array with first N even integers. Finally, the function must return the array.
Hint: Use malloc to allocate the memory for the array of size N.

Example Input/Output 1:
	Input
		5
	Output
		1 3 5 7 9

Example Input/Output 2:
	Input
		8
	Output
		2 4 6 8 10 12 14 16
*/

int* getArrayOfOddOrEven(int n)
{
	int k=(int)malloc(n * sizeof(int));
	int h;
	if(n%2==0)
		h=2;
	else
		h=1;
	for(int i=0;i<n;i++)
	{
		k[i]=h;
		h+=2;
		printf("%d ",k[i]);
	}
	return (k);
}
