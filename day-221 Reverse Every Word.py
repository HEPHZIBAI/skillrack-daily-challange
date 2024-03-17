'''
The program must accept a string S containing multiple words as the input. The program must reverse every word in the string S. Then the program must print the modified string S as the output.

Boundary Condition(s):
	5 <= Length of S <= 1000

Input Format:
	The first line contains S.

Output Format:
	The first line contains the modified string S.

Example Input/Output 1:
	Input:
		Friday and Saturday
	Output:
		yadirF dna yadrutaS
	Explanation:
		After reversing every word in the string Friday and Saturday, the string becomes yadirf dna yadrutaS. Hence the output is yadirF dna yadrutaS

Example Input/Output 2:
	Input:
		Honesty is the best policy
	Output:
		ytsenoH si eht tseb ycilop
'''


a=input().split()
for i in a:
	print(i[::-1],end=" ")
