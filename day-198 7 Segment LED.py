
'''
The program must accept an integer N as the input. A seven segment LED is used to display a single digit. The program must print the total number of segments to be turned ON to display the integer N as the output.

Boundary Condition(s):
	1 <= N <= 10^8

Input Format:
	The first line contains N.

Output Format:
	The first line contains the total number of segments to be turned ON to display the integer N.

Example Input/Output 1:
	Input:
		31
	Output:
		7
﻿Explanation:
	To display the digit 3, 5 segments need to turn ON.
	To display the digit 1, 2 segments need to turn ON.
	The total number of segments to be turned ON to display the integer 31 is 7 (5+2).
	Hence the output is 7

Example Input/Output 2:
	Input:
		88
	Output: 
		14
'''

﻿

n=int(input())
a={0:6,1:2,2:6,3:5,4:,5:5,6:5,7:3,8:7,9:6}
l=0
while(n>0):
	k=n%10 
	l+=(a[k])
	n/=10;
print(l)
