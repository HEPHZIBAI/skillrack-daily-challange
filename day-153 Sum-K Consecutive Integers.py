'''
The program must accept N integers and an integer K as the input. The program must print the sum of every K consecutive integers as the ouput.

Boundary Condition(s): 
	3 <= N <= 10^5 
	-100 <= Each integer value <= 100 
	2 <= K <= 10

Input Format:
	The first line contains N.
	The second line contains N integers separated by a space. 
	The third line contains K.

Output Format:
	The first line contains the sum of every K consecutive integers separated by a space.

Example Input/Output 1:
	Input
		7
		10 20 52-566-69
		3
	Output 
		35 27 2 63-8
	Explanation:
		Here K = 3.
		The sum of every 3 integers among the 7 integers is given below. 
		(10+20+5), (20+5+2), (5+2+(-5)), (2+ (-5)+66), ((-5) 66+ (-69)) 35, 27, 2, 63, -8

'''

n=int(input())
a=list(map(int,input().split())) 
k=int(input())

for i in range(n):
	h=i+k
	if(h>n):
		break
	print(sum(a[i:h]), end=" ")