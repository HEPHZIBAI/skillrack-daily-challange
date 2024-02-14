'''

The program must accept a string S and a word W as the input. The program must swap the words adjacent to the word W. Then the must print the revised value of the string S as the output.

Note:
	-The comparison is case insensitive.
	- Consecutive Ws will not be present in S.

Boundary Condition(s):
	3 <= Length of S <= 1000
	1 <= Length of W <= 30

Input Format:
	The first line contains S.
	The second line contains W.

Output Format:
	The first line contains the revised string value.

Example Input/Output 1:
	Input:
		Sync your devices so you can take the benefits of your Firefox Account everywhere you go
	Output:
		Sync your devices can you so take the benefits of your Firefox Account go you everywhere
	Explanation:
		After swapping the words adjacent to the word you, the string becomes Sync your devices can you so take the benefits of your Firefox Account go you everywhere.
		Hence the output is Sync your devices can you so take the benefits of your Firefox Account go you everywhere

Example Input/Output 2:
	Input:
		When the going gets tough the tough get going going
	Output:
		When gets going the tough the tough get going
'''

a=input().split()
b=input().strip()
i=0

while(i<len(a)):
	if a[i]==b and i-1>=0 and i<=len(a)-2: 
		a[i-1],a[i+1]=a[i+1],a[i-1]
	i+=1

for i in a:
	print(i,end=" ")
