'''
Given a string S and an integer N, print "yes" if the first N characters of the string are equal to the last N characters, otherwise print "no".

Boundary Condition(s): 
	2 <= Length of S <= 100 
	1 <= N <= 100

Input Format:
	The first line contains S.
	The second line contains N.

Output Format:
	The first line contains yes or no.

Example Input/Output 1:
	Input
		madoma
		2
	Output
		yes

Example Input/Output 2:
	Input
		abcdeaacb
		3
	Output: 
		no
'''

a=input().strip()
b=int(input())
m=b*-1
x=a[:b]
y=a[m:]

if(x==y):
	print("yes")
else: 
	print("no")