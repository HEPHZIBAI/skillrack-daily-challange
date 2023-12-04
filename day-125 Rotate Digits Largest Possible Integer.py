'''
The program must accept an integer N as the input. The program must print the largest possible integer which is obtained by rotating the digits of N in the clockwise direction

Boundary Condition(s): 
	10 <= N <= 10^8

Input Format:
	The first line contains N.

Output Format:
	The first line contains the largest possible integer as per the given condition.

Example Input/Output 1:
	Input 
		2451
	Output
		5124
	Explanation:
		The largest possible integer 5124 is obtained by rotating the digits of 2451 for two times in the clockwise direction.So 5124 is printed as the output.

Example Input/Output 2:
	Input:
		151614
	Output
		614151
'''

a=input().strip()
c=a
b=[]
b.append(a)
j=len(a)-1
l=0
for i in range(len(a)):
	c=c[j]+c[j]
	b.append(c)
	d=int(c)
	if(d>1):
		l=d
print(l)