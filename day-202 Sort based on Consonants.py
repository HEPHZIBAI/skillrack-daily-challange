'''
The program must accept N string values as the input. The program must sort the N string values based on the number of consonants. If more than one string values have the same number of consonants then sort them in the order of their occurrence. Finally, the program must print the N modified string values as the output.

Boundary Condition(s):
	1 <= N, Length of each string <= 100

Input Format:
	The first line contains N.
	The second line contains N string values separated by a space.

Output Format:
	The first line contains the N modified string values
separated by a space.

Example Input/Output 1:
	Input:
		4
		Robot Computing Cloud Lab
	Output:
		Lab Robot Cloud Computing
	Explanation:
		The number of consonants in the string "Robot" is 3. 		The number of consonants in the string "Computing" is 6. 
		The number of consonants in the string "Cloud" is 3. 		The number of consonants in the string "Lab" is 2. 		After sorting the 4 string values based on the number of consonants, the order of the 4 string values become 
		Lab Robot Cloud Computing

Example Input/Output 2:
	Input:
		5
		Early bird catches the worm
	Output:
		the Early bird worm catches
'''


﻿
a=int(input())
b={}
c=input().split() 
for i in c:
	f=0
	for j in i:
		if j not in "aeiouAEIOU": 
			f+=1
	if f not in b:
		b[f]=[i]
	else:
		b[f].append(i)

h=list(b.keys())
h.sort()
for i in h:
	for j in b[i]:
		print(j,end=" ")
