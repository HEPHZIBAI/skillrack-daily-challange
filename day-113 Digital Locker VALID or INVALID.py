'''
The program must accept two string values U and Pas the input. U represents the username of a digital locker and P represents its password. The program must print VALID if the password does not contain any characters from the username U. Else the program must print INVALID as the output.

Boundary Condition(s):
	5 <= Length of U <= 50
	4 <= Length of P <= 20

Input Format:
	The first line contains U. The second line contains P.

Output Format:
	The first line contains either VALID or INVALID.

Example Input/Output 1:
	Input
		uit047@demo
		srack123
	Output 
		VALID
	Explanation:
		Here the password srack123 does not contains any characters from the username uit047@demo So VALID is printed as the output.

Example Input/Output 2:
	Input:
		AVNG007_bk47
		o7st0ct2019
	Output:
		INVALID
'''
a=input().strip()
b=input().strip()
m=1
for i in b:
	if(i in a):
		m=0
		break

if(m): 
	print("VALID")
else: 
	print("INVALID")
