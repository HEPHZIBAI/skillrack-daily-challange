'''
The program must accept an integer matrix of size RC as the input. The program must print the mirror image of the matrix as the output

Boundary Condition(s):
	1<=R ,C < 100

Input Format: 
	The first line contains R and C separated by a space The next R lines each contain C integers separated by a space

Output Format:
	The first R lines each contain C integers representing the mirror image of the matrix

Example Input/Output 1:
	Input
		2 3
		1 2 3
		4 5 6
	Output
		3 2 1
		6 5 4

Example Input/Output 2:
	Input
		4 4
		10 54 78 96
		36 59 24 87
		82 69 23 64
		16 26 87 12
	Output
		69 87 45 01
		78 42 95 63
		46 32 96 28
		21 78 62 61
'''
r,c=map(int, input().split())
a=[[]]
for i in range(r):
	b=input().strip()
	b=list(b.split())
	a.append(b)
f=0
for i in a:
	k=i[::-1]
	for j in k:
		print(j[::-1],end=" ")
		f=1
	if(f) :
		print("")