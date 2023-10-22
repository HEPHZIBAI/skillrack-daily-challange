'''
The program must accept the factors of an integer N (excluding 1 and N) as the input. The program must find the integer N from its factors and print it as the output.

Input Format:
	The first line contains a list of integers separated by a space.

Output Format:
	The first line contains an integer N.

Example Input/Output 1:
	Input
		8 2 6 12 4 3
	Output 
		24
	Explanation:
		The factors of 24 are 2,3,4,6,8 and 12 (excluding 1 and 24). Here, the given factors are the factors of 24.So 24 is printed as the output.

Example Input/Output 2:
	Input
		5 3
	Output
		15
'''
a=list (map(int, input().split()))
a.sort()
print (a[0]*a[len(a)-1])