'''
﻿The program must accept a matrix of size R*C and sort the integers in the matrix. Then the program must print the integer values in the sorted matrix.

Boundary Condition(s):
	2 <= R, C <= 100

Input Format:
	The first line contains R and C separated by a space.
	The next R lines, each containing C integer values separated by a space.

Output Format:
	The first R lines, each containing C integer values separated by a space.

Example Input/Output 1:
	Input:
		3 3
		66 6 69
		34 45 54
		36 7 77
	Output:
		6 7 34
		36 45 54
		66 69 77

Example Input/Output 2:
	Input:
		4 5
		39 22 20 98 68
		28 52 30 57 58
		57 97 46 23 76
		53 70 44 51 95
	Output:
		20 22 23 28 30
		39 44 46 51 52
		53 57 57 58 68
		70 76 95 97 98
'''

﻿

r,c=map(int,input().split())
a=[]
for i in range(r):
	b=list(map(int,input().split()))
	a.extend(b)
a.sort()
k=0
for i in range(r):
	for j in range(c):
		print(a[k],end=" ")
		k+=1
	print()
