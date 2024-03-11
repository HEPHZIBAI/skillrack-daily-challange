'''
The program must accept a string S as the input. The program must arrange the vowels in the string S in sorted order. Finally, the program must print the modified string S
as the output.

Boundary Condition(s):
	3<= Length of S <= 100

Input Format:
	The first line contains S.

Output Format:
	The first line contains the modified string S.

Example Input/Output 1:
	Input:
		skillrack
	Output:
		skallrick
	Explanation:
		After arranging the vowels in the string skillrack in sorted order, the string becomes skallrick.
		Hence the output is skallrick

Example Input/Output 2:
	Input:
		PROGRAMMING
	Output:
		PRAGRIMMONG
'''


a=input().strip()
b=[]
for i in a:
	if i in "aeiouAEIOU": 
		b.append(i)
b.sort()
k=0
for i in a:
	if i not in "aeiouAEIOU":
		print(i, end="")
	else:
		print(b[k], end="") 
		k+=1
