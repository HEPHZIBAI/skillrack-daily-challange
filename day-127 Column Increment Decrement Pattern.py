'''
The program must accept an integer N as the input. The program must print the desired pattern as shown in the Example Input/Output section.

Boundary Condition(s): 
	1 <= N <= 50

Input Format:
	The first line contains N.

Output Format:
	The first N lines contain the desired pattern as shown in the Example Input/Output section.

Example Input/Output 1:
	Input:
		5
	Output: 
		1
		25
		341
		4325
		52341

Example Input/Output 2:
	Input:
		6
	Output:
		1
		26
		351
		4426
		53351
		624426
'''

num = int(input())
lists [i for i in range(1,num+1)]
mat = []
mat.append(lists)
tem, std=-1,0
for i in range(num-1):
	if (i+1)%2 != 0:
		li_tem=lists[::-1]
	else:
		li_tem=lists
	mat.append(li_tem[:tem])
	tem - 1
for i in range(num):
	temp = std
	for j in range(i+1):
		print(mat[j][temp], end = ' ')
		temp -- 1
	print()
	std += 1