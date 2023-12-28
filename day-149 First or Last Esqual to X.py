'''
The program must accept a list of integers and an integer X as the input. The program must print YES if the first integer of the list is equal to X or the last integer of the list is equal to X. Else the program must print NO as the output.

Boundary Condition(s): 
1 <=X, Each integer value <= 10^4

Input Format:
	The first line contains a list of integers separated by a space. The second line contains X.

Output Format:
	The first line contains YES or NO.

Example Input/Output 1:
	Input
		41 10 54 87 12 10
		10
	Output
		YES
	Explanation: 
		Here X=10.
		The last integer of the list is also 10. 
		So YES is printed as the output.
'''


a=list(map(int,input().split())) 
x=int(input())
if(a[0]=x or a[len(a)-1]==x): 
	print("YES")
else:
	print("NO")