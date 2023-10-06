'''
The program must accept a string S representing an integer in words as the input. The program must print the corresponding digit for each word in S as the output. The words and their equivalent digits are given below.

zero-0
one - 1
two-2
three-3
four-4
five-5
six - 6
seven-7
eight-8
nine - 9

Boundary Condition(s):
	3<= Length of S <= 10^8
Input Format:
	The first line contains S.
Output Format:
	The first line contains a digit for each word in S.

Example Input/Output 1:
	Input
		one five seven
	Output
		157
Example Input/Output 2:
	Input 
		four nine nine zero eight one
	Output: 
		499081
'''


a-input().strip()
a=a.split()
b=["zero", "one", "two", "three", "four","five","six", "seven" ,"eight","nine"]
for i in a:
	i=i.strip()
	print (b.index(i), end="")