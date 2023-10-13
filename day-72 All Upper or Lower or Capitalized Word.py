'''
The program must accept a string S as the input. The program must print VALID if any of the following conditions are true.

-If all the characters of S are upper case alphabets. - If all the characters of S are lower case alphabets.

If the first character of S is an upper case alphabet and the remaining characters are lower case alphabets.

The program must print INVALID if none of the conditions are true as the output.

Boundary Condition(s):
	1 <= Length of S <= 1000

Input Format: 
	THe first line contains S.

Output Format: 
	The first line contains VALID or INVALID.

Example Input/Output 1: 
	Input:
		SKILLRACK
	Output: 
		VALID

Example Input/Output 2:
	Input:
		skillrack
	Output: 
		VALID

Example Input/Output 3: 
	Input:
		Skillrack
	Output: 
		VALID

Example Input/Output 4:
	Input: 
		SkillRack
	Output: 
		INVALID
'''

a input().strip()
if(a.isupper() or a.islower() or (a[0].isupper() and a[1:].islower())): 
	print("VALID")
else:
	print("INVALID")