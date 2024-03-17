'''
The program must accept N string values and sort them.Then the program must print the first and the last string values.

Boundary Condition(s):
	2 <= N <= 100
	1 <= Length of each string <= 100

Input Format:
	The first line contains N.
	The second line contains N string values separated by a space.

Output Format:
	The first line contains the first string value in the N sorted string values.
	The second line contains the last string value in the N
sorted string values.

Example Input/Output 1:
	Input:
		5
		lion tiger elephant monkey leopard
	Output:
		elephant
		tiger
	Explanation:
		Here N = 5.
		After sorting the 5 string values, the string values
		become elephant leopard lion monkey tiger
		Here, the first and the last string values are elephant and tiger.
		Hence the output is
﻿			elephant
			tiger

Example Input/Output 2:
	Input:
		bluebell rose bluebell sunflower
	Output:
		bluebell
		sunflower
'''


n=int(input())
a=input().split()
a.sort() 
print(a[0])
print(a[-1]) 