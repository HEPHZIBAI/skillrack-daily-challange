'''
The program must accept N integers as the input. The program must find the maximum of every three integers among the N integers. Then the program must find the minimum of every three integers from the obtained maximum integers. Repeat those two steps until the program gets a single integer X. Finally, the program must print X as the output. Note: If there are no three integers to find the minimum or maximum, consider only the available integers.

Boundary Condition(s):
	3 <= N <= 1000
	1 <= Each integer value <= 10^8

Input Format:
	The first line contains N.
	The second line contains N integers separated by a space.

Output Format:
	The first line contains X.

Example Input/Output 1: 
	Input: 
		10
		14 3 66 26 2 98 86 23 51 5
	Output: 
		66
	Explanation:
		The given 10 integers are 14 3 66 26 2 98 86 23 51 5
		After finding the maximum of every three integers, the integers become 66 98 86 5
		After finding the minimum of every three integers, the integers become 66 5
		After finding the maximum of the remaining two integers, there will be one integer 66.
		Hence the output is 66

Example Input/Output 2:
	Input:
		9
		1 2 3 4 5 6 7 8 9
	Output: 
		3

Example Input/Output 3:
	Input:
		28
		41 25 34 15 17 49 42 50 38 20 36 30 39 18 28 16 22 23 11 33 45 27 37 13 31 19 14 12
	Output: 
		12
	Explanation:
		Maximum of every three among the given 28 integers: 41 49 50 36 39 23 45 37 31 12
		Minimum of every three among the obtained integers from the previous step: 41 23 31 12
		Maximum of every three among the obtained integers from the previous step: 41 12
		Minimum of the remaining two from the previous step: 12
'''


﻿n=int(input())
a=list(map(int,input().split()))

while len(a)>1:
	b=[] 
	c=[]
	while(len(a)>0):
		c=[]
		while(len(a)>0 and len(c)<3): 
			c.append(a[0])
			del a[0]
		b.append(max(c))
		
	a=b
	b=[]
	c=[]
	while(len(a)>0):
		c=[]
		while(len(a)>0 and len(c)<3):
			c.append(a[0])
			del a[0]
		b.append(min(c))
	a=b
print(b[0])

