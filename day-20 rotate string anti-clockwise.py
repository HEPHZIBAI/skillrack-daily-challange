'''
The program accepts a string S and an integer N as the input. The program must rotate the string S for N times in anti-clockwise direction and print the modified string as the output.
Boundary Condition(s): 1 < Length of S <= 100 1 <= N = 1000
Input Format:
	The first line contains S. The second line contains N.
Output Format:
	The first line contains the modified string.
Example Input/Output 1 :
	Input
		mangoes
		3
	Output: 
		goesman
	Explanation
		After the first anti-clockwise rotation, the string becomes "angoesm". After the second anti-dockwise rotation, the string becomes "ngoesma". After the third anti-clockwise rotation, the string becomes "goesman".

Example Input/Output 2:
	Input:
		hi
		10
	Output:
		hi
'''



#answer



a-input().strip() 
d=int(input())
l=len(a)
for i in range(d):
	c=a[0]
	a=a[1:]+c 
print(a)