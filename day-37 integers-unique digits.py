'''
The program must accept two integers X and Y as the input. The program must print the integers from X to Y which are having unique digits. If there is no such integer from X to Y then the program must print -1 as the output.

Boundary Condition(s):
	1 <= X <= Y <= 10^8

Input Format:
	The first line contains X and Y separated by a space.

Output Format:
	The first line contains the integers from X to Y which are having unique digits separated by a space or -1.

Example Input/Output 1:
	Input
		10 15
	Output 
		10 12 13 14 15
	Explanation: 
		The integers from 10 to 15 are 10 11 12 13 14 and 15. 
		Here 11 does not have unique digits (as 1 is repeated). 
		Hence the output is 10 12 13 14 15

Example Input/Output 2:
	Input: 
		110 119
	Output:
		-1
'''


m, n=input().split()
k=0 
for i in range(int (m), int (n)+1): 
	z=0; 
	t=str(i)
	for j in t: 
		m=t.count(j)
		if m>1: 
			Z=1 
	if z==0: 
		print(i,end=" ") 
		k=1

if k==0: 
	print(-1)