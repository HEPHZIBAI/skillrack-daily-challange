'''
The program must accept the shortcode of a TV serial as the input. The format of the TV serial shortcode is "S followed by the season number E followed by the episode number". The program must expand and print the name of the TV serial as shown in the Example Input/Output section.

Note: The length of the TV serial shortcode is always 6.

Input Format: 
	The first line contains the shortcode of a TV serial

Output Format: 
	The first line contains the name of the TV serial

Example Input/Output 1:
	Input 
		S02E05
	Output 
		Season 2, Episode 5

Explanation:
	The shortcode of the TV serial is S02E05 
	In the shortcode, 5 represents Season and E represents Episode 	Hence the output is Season 2, Episode 5

Example Input/Output 2:
	Input:
		S10647
	Output 
		Season 10, Episode 47
'''

a=input().strip()
if(a[0]=='S'): 
	print("Season", end=" ")

k=1

while(a[k]=='0'): 
	k+=1

while(a[k]!='E'): 
	print(a[k], end="") 
	k+=1 

print(', Episode |', end="")
k+=1

while(a[k]=='0'): 
	k+=1

while(k<len(a)): 
	print(a[k], end="") 
	k+=1