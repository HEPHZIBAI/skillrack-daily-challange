'''
The program must accept two integers X and Y as the input. The program must modify the integers X and Y based on the following conditions.
	- Each occurrence of 5 in X and Y can be replaced by 6.
	- Each occurrence of 6 in X and Y can be replaced by 5.
Finally, the program must print the minimum possible sum and the maximum sum of those two modified integers as the output.

Boundary Condition(s):
	1 <= X, Y <= 10^8

Input Format:
	The first line contains X and Y separated by a space.

Output Format:
	The first line contains the minimum possible sum of X and Y.
	The second line contains the maximum possible sum of X and Y.

Example Input/Output 1:
	Input:
		645 656
	Output:
		1100
		1312
	Explanation:
		Here X = 645 and Y = 656.
		To get the minimum possible sum, 
		X can be modified as 545.
		Y can be modified as 555.
		So the sum of 545 and 555 is 1100.
		To get the maximum possible sum, 
		X can be modified as 646.
		Y can be modified as 666.
		So the sum of 646 and 666 is 1312.

Example Input/Output 2: 
	Input:
		2391 6515
	Output:
		7906
		9007
'''

a,b=map(str,input().split())
x = a.replace('5','6') 
y = b.replace('5','6') 
sum1 = int(x)+int(y) 
m = a.replace('6','5')
n =b.replace('6','5')
sum2 = int(m)+int(n) 
print(min(sum1, sum2)) 
print(max(sum1,sum2))