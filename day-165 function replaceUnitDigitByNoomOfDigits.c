/*
You must implement the function replaceUnitDigitByNumOfDigits (int arr[], int N) which accepts an integer array of size N as the input. For each integer X in the array arr, the function must replace the unit digit of X by the number of digits in it.

Boundary Condition(s): 
	1 <= N <= 100 
	0 <= Each integer value <= 10^8

Example Input/Output 1:
	Input:
		5
		14 987 8 32154 2985
	Output: 
		12 983 1 32155 2984
	Explanation:
		The unit digit of 14 is 4. The number of digits in 14 is 2. So 4 is replaced by 2. Now the integer becomes 12. 
		The unit digit of 987 is 7. The number of digits in 967 is 3. So 7 is replaced hv 3. Now the integer hecomes 983.
		The unit digit of 8 is 8. The number of digits in 8 is 1. So 8 is replaced by 1. Now the integer becomes 1.
		The unit digit of 32154 is 4. The number of digits in 32154 is 5. So 4 is replaced by 5. Now the integer becomes 32155. A
		The unit digit of 2985 is 5. The number of digits in 2985 is 4. So 5 is replaced by 4. Now the integer becomes 2984.

Example Input/Output 2:
	Input 
		4 
		90 5 0 4449
	Output 
		92 1 1 4444
*/