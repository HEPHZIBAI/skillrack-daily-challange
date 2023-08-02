/*
The program must accept two lower case alphabets CH1 and CH2 as the input. The program must print all the consonants from CH1 to CH2 as the output.

Input Format:

	The first line contains CH1 and CH2 separated by a space.

Output Format:

	The first line contains all the consonants from CH1 to CH2.

Example Input/Output 1:

	Input
	
		a z

	Output:
	
		b c d f g h j k l m n p q r s t v w x y z

	Explanation:
	
		All the consonants (except the vowels) from a to z are printed as the output.

Example Input/Output 2:

	Input:

		v h

	Output:

		v t s r q p n m l k j h
*/

answer:
	#include<stdio.h>
	int main()
	{
		char a,b;
		scanf("%c %c",&a,&b);
		if(a<=b)
		{
			for(;a<=b;a++)
			{
				printf("%c ",a);
			}
		}
		else
		{
			for(;a>=b;a--)
			{
				printf("%c ",a);
			}
		}
	}