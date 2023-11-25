'''
The program must accept an integer N as the input. The program must form a binary representation B of length N (ie, B has N bits) by concatenating 1s and Os alternatively. Then the program must print the decimal equivalent of B as the output

Boundary Condition(s): 
	1<=N<=63

Input Format: 
	The first line contains N.

Output Format:
	The first line contains the decimal equivalent of B.

Example Input/Output 1:
	Input
		5
	Output 
		21
	Explanation:
		Here N5, so the binary representation 8 is 10101 (alternate 1s and Os of length 5). The decimal equivalent of 10101 is 21.Hence the output is 21

Example Input/Output 2:
	Input: 
		8
	Output: 
		170
	Explanation:
		Here N=8, so the binary representation B is 10101010 (alternate 1s and Os of length 8).The decimal equivalent of 10101010 is 170.Hence the output is 170
'''

a=int(input())
b="" 
for i in range(a//2):
	b+="10" 
if(a%2!=0): 
	b+='1'
h=0
s=0
for i in range(a-1,-1,-1): 
	if(b[i]=='1'): 
		w=1
	else: 
		w=0
	s+pow(2,h)*w 
	h+=1 
print(s)
