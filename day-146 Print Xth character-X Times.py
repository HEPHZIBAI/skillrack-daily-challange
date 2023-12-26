'''
The program must accept a string S and an integer X as the input. The program must replace the Xth character in S by repeating it X times. Then the program must print the modified string S as the output.

Boundary Condition(s): 
	1 <= x <= Length of S <= 1000

Input Format:
	The first line contains S.
	The second line contains X

Output Format:
	The first line contains the modified S.

Example Input/Output 1:
	Input
		skillrack
		5
	Output
		skilllllrack
	Explanation:
		The 5th character in string skillrack is L. So I is replaced by repeating it five times. Hence the output is skillllilrack

Example Input/Output 2:
	Input
		Environment
		4
	Output
		Envillironment
'''

a=input().strip()
n=int(input())
print(a[n-1],a[n-1]*n,a[n:], sep="")