'''
The program must accept a string S containing multiple words and an integer X as the input. The program must reverse the every Xth word in S. Then the program must print the modified string S as the output.

Boundary Condition(s): 
	5 <= Length of S <= 1000 
	1 <= x <= 50

Input Format:
	The first line contains S.
	The second line contains X.

Output Format:
	The first line contains the modified string S.

Example Input/Output 1:
	Input:
		A jellyfish stings even when dead
		3
	Output:
		A jellyfish sgnits even when daed
	Explanation:
		After reversing the every 3rd word in the given string, it becomes " A jellyfish sgnits even when daed".

Example Input/Output 2:
	Input:
		Butterflies can hear, and some of them have ears that are situated on their wings.
		4
	Output:
		Butterflies can hear, dna some of them evah ears that are detautis on their wings.
'''
a=input().strip()
a=list(a.split())
b=int(input())
k=1
for i in a:
	if(k==b):
		print(i[::-1], end="")
		k=1
	else:
		print(i,end="")
		k+=1