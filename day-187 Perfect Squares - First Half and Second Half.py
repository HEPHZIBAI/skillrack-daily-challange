'''
The program must accept an integer N as the input. The program must split the integer N into two equal halves. Finally, the program must print YES if the first half of N, the second half of N and the N are perfect squares. Else the program must print NO as the output.
Note: The number of digits of N is always even.

Boundary Condition(s):
	10 <= N <= 10^17

Input Format:
	The first line contains N.

Output Format:
	The first line contains either YES or NO.

Example Input/Output 1:
	Input:
		1681
	Output: 
		YES
	Explanation:
		1681 is the perfect square of 41.
		The first half of 1681 is 16. Here 16 is the perfect square of 4.
		The second half of 1681 is 81. Here 81 is the perfect square of 9.
		So 16, 81 and 1681 are the perfect squares.
		Hence the output is YES

Example Input/Output 2:
	Input:
		625526
	Output: 
'''

import math
a=input().split()
l=len(a)//2
x=int(a[:l])
y=int(a[l:])
a=int(a)
f=math.sqrt(a)
if abs(f-int(f))==0:
	f=math.sqrt(x)
	if abs(f-int(f))==0:
		f=math.sqrt(y)
		if abs(f-int(f))==0:
			print("YES")
		else:
			print("NO")
	else:
		print("NO")
else:
	print("NO")