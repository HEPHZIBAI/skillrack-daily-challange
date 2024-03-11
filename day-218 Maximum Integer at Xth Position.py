'''
The program must accept N integers and an integer X as the input. The program must print all the integers such that the integer in the Xth position is always maximum and the remaining integers are printed in descending order as the output.

Boundary Condition(s):
	2 <= N <= 1000
	1 <= X <= N

Input Format:
	The first line contains N and X separated by a space. The second line contains N integers separated by a space.

Output Format:
	The first line contains the N integers separated by a space based on the given conditions.

Example Input/Output 1:
	Input:
		53
		55 10 25 47 73
	Output:
		55 47 73 25 10
	Explanation:
		The maximum integer value is 73 which is printed in the 3rd position.
		The remaining integers are sorted in descending order as 55 47 25 10.
		Hence the output is 55 47 73 25 10

Example Input/Output 2:
	Input:
		62
		12 45 23 89 36 24
	Output:
		45 89 36 24 23 12
'''

﻿
n,x=map(int,input().split())
a=list(map(int,input().split()))
b=max(a)
a.remove(b)
a.sort(reverse=True)
a.insert(x-1,b)
for i in a:
	print(i,end="")
