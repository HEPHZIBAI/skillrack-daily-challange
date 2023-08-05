'''
The program must accept three integers X, Y and Z as the input. The program must print the value having the largest tenth digit as the output. If multiple values have the largest tenth digit, then the program must print the largest value among them as the output.

Boundary Condition(s):

	10 X, Y, Z <= 10^8

Input Format: 
	The first line contains the value of X, Y and Z separated by spaces(s).

Output Format:

	The first line contains the largest value based on the given conditions.

Example Input/Output 1:

	Input

		520 100 210

	Output 
		520

	Explanation:

		The tenth digits are 2, 0 and 1. The largest of them is 2.

		Hence 520 is printed.

Example Input/Output 2

	Input

		862 62 332

	Output 
		862
'''


#answer
	a=list(map(int, input().split()))
	l=0
	n=0
	for i in a: 
		m=(i%100)//10
		if(1<m): 
			l=m
			n=i
		elif(l==m):	
			if(n<i):
				n=i
	print(n)