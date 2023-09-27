/*
The program must accept a string S, a character CH and an integer X as the input. The program must remove the first X occurrences of the character CH in the string S. Then the program must print the modified string S as the output. If all the characters are removed from the string S, the program must print -1 as the output. Note: The string S is case sensitive.

Boundary Condition(s):
	1< Length of S <= 1000 1 <= X <= 100

Input Format:
	The first line contains S. The second line contains CH and X separated by a space.

Output Format:
	The first line contains the modified string S or -1 as per the given

Example Input/Output 11
	Input
		Digitization
		i 3
	Output:
		Dgtzation
	Explanation:
		Here the string is Digitization.
		After removing the first 3 occurrences of 1, the string becomes Dgtzation. 		Hence the output is Dgtzation

Example Input/Output 2:
	Input
		B2b5b4@ABC
		B 4
	Output 
		2b5b4@AC

Example Input/Output 3:
	Input
		AAAA
		A 7
	Output
		-1
*/


a=input()
b-input().split()
d=b[0]
c=int(b[1]) 
while(c>0):
	C-=1
	l=0
	while(l<len(a) and a[l]!=d): 
		l+=1
	a=a[0:1]+a[l+1:]

if(len(a)<=0 or a==''):
	print("-1")
else:
	print(a)