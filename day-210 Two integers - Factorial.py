'''
The program must accept two integers A and B as the input. The program must print the value of A!/B! as the output.
Note: The difference between A and B is always less than or equal to 5.

Boundary Condition(s):
	1 <= B <= A <= 10^4

Input Format:
	The first line contains A and B separated by a space.

Output Format:
	The first line contains the value of A!/B!.

Example Input/Output 1:
	Input:
		4 2
	Output:
		12
	Explanation:
		Here A=4 and B=2,
		The value of 4! is 24 (4*3*2*1 = 24).
		The value of 2! is 2 (2*1=2).
		The value of 4!/2! is 12 (24/2 = 12), so 12 is printed as the output.

Example Input/Output 2:
	Input:
		12 9
	Output:
		1320
'''


a,b=map(int,input().split())
X=1 
y=1

for i in range(2,a+1):
	x*=i

for i in range(2,b+1): 
	y*=i
print(x//y) 