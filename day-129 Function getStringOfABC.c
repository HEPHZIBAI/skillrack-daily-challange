/*
You must implement the function getStringOfABC(int N) which accepts an integer N as the input. The function must form a string $ of length N based on the following condition
-The string S contains the alphabets a, b and e in circular fashion. Then the function must return the string S.

Example Input/Output 1:
	Input:
		5
	Output
		abcab

Example Input/Output 2:
	Input
		9
	Output
		abcabcabc
*/

char* getStringOfABC(int N)
{
	char a[N];
	char b='a';
	int k=0;
	while(N>0)
	{
		a[k]=b; 
		b++;
		k+=1;
		N--;
		if(b>'c')
			b='a';
	} 
	printf("%s",a);
	return a;
}