'''
The program must accept three integers X, Y and Z as the input. The program must print the GCD (Greatest Common Divisor) of X, Y and Z as the output.

Boundary Condition(s): 
	1 <= X, Y, Z <= 10^8

Input Format:
	The first line contains X, Y and Z separated by a space.

Output Format:
	The first line contains the GCD of X, Y and Z

Example Input/Output 1:
	Input
		70 100 50
	Output 
		10
Example Input/Output 2:
	Input 
		26 65 13
	Output
		13
'''
a,b,c=map(int,input().split())
g=0
for i in range(1, min(a,b,c)+1): 
	if a%i==0 and b%i==0 and c%i==0:
		g=i
print(g)