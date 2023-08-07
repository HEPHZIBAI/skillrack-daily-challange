'''
The program must accept a list of integers as the input. The program must print the sum of even integers in the list then the program must print the average of odd integers in the list with the precision up to one decimal place. If there is no even integer in the list, the program must print -1 as the output. If there is no odd integer in the list, the program must print -1 as the output.

Note: Zero is neither odd nor even. So no need to consider the zero to find the sum of even integers and to find the average of odd integers.

Boundary Condition(s):

	0 <= Each integer value <= 10^5

Input Format:

	The first line contains the list of integers separated by space(s).

Output Format:

	The first line contains the sum of even integers in the list or -1.
	
	The second line contains the average of odd integers in the list or -1.

Example Input/Output 1:

	Input

		12345678

	Output

	20

	4.0

	Explanation:

	The even integers are 2 4 6 and 8. So their sum is 20 The odd integers are 135 and 7. So their average is 4.0 Hence the output is 	20

	4.0
	
Example Input/Output 2:

	Input:

		10 20 30 40 50
	
	Output:

		150

		-1

Example Input/Output 3:

	Input:

		11 13 15 17 19

	Output:

		-1

		15.0
'''



#answer

a=list(map(int,input().split()))
m=0
o=0
e=0
for i in a:
	if(i!=0):
		if(i%2==0): 
			e+=i
		else:
			o+=i
			m+=1

if(e>0):
	print(e)
else:
	print("-1")
if(o>0):
	print('%.1f' %(o/m))
else:
	print("-1")