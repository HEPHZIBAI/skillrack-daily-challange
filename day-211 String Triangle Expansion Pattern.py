'''
The program must accept a string S as the input. The program must print the desired pattern as shown in the Example Input/Output section.

Boundary Condition(s):
	4 <= Length of S <= 50

Input Format:
	The first line contains S.

Output Format:
	The lines containing the desired pattern as shown in the Example Input/Output section.

Example Input/Output 1:
	Input:
		skill
	Output:
		ssskil|||||*
		sskkiillll**
		skkkiiill***

Example Input/Output 2:
	Input:
		monday
	Output:
		mmmmonddddaaaay
		mmmoonndddaaayy
		mmooonnnddaayyy
		moooonnnndayyyy

Example Input/Output 3:
	Input:
		FLUORESCENT
	Output:
		FFFFFFFFFLUO00000000RRRRRRRRRESCCCCCCCCCEEEEEEEE
		FFFFFFFFLLUU00000000RRRRRRRREESSCCCCCCCCEEEEEEEEN
		FFFFFFFLLLUUUOOOOOOORRRRRRREEESSSCCCCCCCEEEEEEENI
		FFFFFFLLLLUUUUOOOOOORRRRRREEEESSSSCCCCCCEEEEEENNI
		FFFFFLLLLLUUUUUOOOOORRRRREEEEESSSSSCCCCCEEEEENNNI
		FFFFLLLLLLUJUUOOOORRRREEEEEESSSSSSCCCCEEEENNNNI
		FFFLLLLLLLUUUUUUUOOORRREEEEEEESSSSSSSCCCEEENNNNNI
		FFLLLLLLLLUJUUUOORREEEEEEEESSSSSSSSCCEENNNNNNI
		FLLLLLLLLLUUUUUUUUUOREEEEEEEEESSSSSSSSSCENNNNNNNI
'''




﻿string=input().strip()
N = len(string)
string=((string + '*') if(N & 1) else (string))
for i in range(1 (N − 1)):
	repeat_1 = (N - i-1)
	repeat_2 = i
	for j in range(0, (len(string) - 2 + 1), 2):
		pattern_1 = (string[j] * repeat_1)
		pattern_2 = (string[(j + 1)] * repeat_2)
		print((pattern_1 + pattern_2) end ="")
		repeat_1, repeat_2=repeat_2, repeat_1
	print()
