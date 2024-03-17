'''
The program must accept an integer N as the input. The program must print yes if exactly three digits are used to form the integer N. Else the program must print no as the output.

Boundary Condition(s):
	100 <= N <= 10^18

Input Format:
	The first line contains N.

Output Format:
	The first line contains either yes or no.

Example Input/Output 1:
	Input:
		1221255
	Output:
		yes
	Explanation:
		Here the integer 1221255 is formed using exactly three
digits 1, 2 and 5.
		Hence the output is yes

Example Input/Output 2:
	Input:
		1024
	Output:
		no
'''
﻿


n=input().strip()
a=set(n)

if len(a)==3:
	print("yes")
else:
	print("no")
