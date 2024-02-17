'''
The program must accept N integer values and check if they are sorted
or not.

Boundary Condition(s):
	2 <= N <= 100
	1 <= Each integer value <= 1000

Input Format:
	The first line contains N.
	The second line contains N integer values separated by a space.

Output Format:
	The first line contains yes or no.

Example Input/Output 1:
	Input:
		5
		12 25 456 875 1000
	Output: 
		yes

Example Input/Output 2:
	Input:
		5
		1000 654 321 21 5
	Output:
		yes

Example Input/Output 3:
	Input:
		4
		26 55 12 105
	Output:
		no
'''

a=int(input())
b=list(map(int,input().split()))
x=b[::]
y=b[::]
x.sort()
y=x[::-1]
m=1
for i in range(a):
	if x[i]!=b[i]:
		m=0
		break
if m:
	print("yes")
else:
	m=1
	for i in range(a):
		if y[i]!=b[i]:
			m=0
			break
	if m:
		print("yes")
	else:
		print("no")
