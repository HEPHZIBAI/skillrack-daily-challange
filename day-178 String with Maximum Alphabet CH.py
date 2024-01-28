'''
The program must accept two string values S1 and S2 containing only alphabets and an alphabet CH as the input. The program must print the string which has the maximum occurrences of the CH. If both S1 and S2 have the same number of occurrences of the CH then the program must print the first string S1 as the output.

Note: At least one of the string values will always contain the alphabet CH.

Boundary Condition(s):
	3 <= Length of S1, S2 <= 100

Input Format:
	The first line contains S1.
	The second line contains S2.
	The third line contains CH.

Output Format:
	The first line contains S1 or S2.

Example Input/Output 1:
	Input:
		world
		hello
		l
	Output: 
		hello
	Explanation:
		The alphabet CH is I.
		In the string word, the number of occurrences of the alphabet I is 1.
		In the string he o, the number of occurrences of the alphabet I is 2. So the maximum(larger) count is 2.
		Hence the output is hello

Example Input/Output 2:
	Input:
		happy 
		day
		a
	Output: 
		happy
'''


a=input().strip()
b=input().strip()
c=input().strip()

if a.count(c)>=b.count(c):
	print(a)
else:
	print(b)
