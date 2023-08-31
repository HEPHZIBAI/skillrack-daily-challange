/*
The program must accept an integer value N and remove digits from the end till an odd digit is in the tenth digit position. N will contain atleast two digits.

Boundary Condition(s): 
	10 <= N <= (231)-1

Input Format: 
	The first line contains N.

Output Format: 
	The first line contains the integer value having tenth digit as an ad digit

Example Input/Output 1:
	Input 
		12345

	Output 
		1234

Example In/Output 2:

	Input
		2357
	
	Output 
		2357

Example Input/Output 3: 
	
	Input 
		592468
	
	Output 
		592
*/


#include <stdio.h>

int main() {
    long int N;
    scanf("%ld", &N);

    while ((N / 10) % 2 == 0) {
        N /= 10;
    }

    printf("%ld\n", N);

    return 0;
}