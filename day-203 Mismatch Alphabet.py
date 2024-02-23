'''
Given a string S as the input, the program must print the mismatch alphabet (which is not in sequence) in the string.

Boundary Condition(s):
	4 <= Length of S <= 10

Input Format:
	The first line contains the string S.

Output Format:
	The first line contains the mismatch alphabet in the string.

Example Input/Output 1:
	Input:
		aergc
	Output:
		r
	Explanation:
		Arrange the alphabets of the string in a series. Then find the mismatch alphabet so that the string has the series of alphabets (acea).

Example Input/Output 2:
	Input:
		rpmsqut
	Output:
		m

﻿'''


a=input()
a1=list(a)
a1.sort()
a2=[]

for i in range(len(a)-1):
	a2.append(abs(ord(a1[i])-ord(a1[i+1])))

a3=set(a2)
a4=list(a3)

for i in range(len(a4)):
	if(a4.count(a4[i])==a2.count(a4[i])):
		ind=a2.index(a4[i])

if(ind==len(a)-2):
	print (al[ind+1])
else:
	print(al[ind])
