'''
The program must accept two integers X and Y as the input. The program must print all the palindromic integers from X to Y as the output. If there is no palindromic integers from X to Y then the program must print -1 as the output.
	Boundary Condition(s):
		1 <= X, Y <= 10^5
Input Format: 
	The first line contains X and Y separated by a space.
Output Format:
	The first line contains the palindromic integers from X to Y separated by a space or -1.

Example Input/Output 1:
	Input:
		120 191
	Output: 
		121 131 141 151 161 171 181 191

Example Input/Output 2:
	Input 
		455 463
	Output
		-1
'''

a,b=input().split()
x=int(a) 
y=int(b)
m=1
for i in range(x,y+1):
	d=str(i)
	if(d==d[::-1]):
		print(d, end="")
		m=0
if(m): 
	print("-1")