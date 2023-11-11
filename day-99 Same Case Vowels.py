'''
The program must accept a string $ containing only alphabets as the input. The program must print YES if all the vowels in the string S are same case (ie either upper case or lower case). Else the program must print NO as the output. Note: At least one vowel is always present in the string S

Boundary Condition(s): 
	1<=Length of 5 <= 1000

Input Format: 
	The first line contains S

Output Format: 
	The first line contains YES or NO.

Example Input/Output 1:
	Input
		SkillRack
	Output
		YES
	Explanation:
		The string Sk IIR ck contains two vowels i and a. Here i and a are in lower case. So YES is printed as the output

Example Input/Output 2:
	Input
		Information
	Output
		NO

Example Input/Output 2:
	Input:
		Information
	Output: 
		NO

Example Input/Output 3:
	Input:
		ElgHtEEn
	Output:
		YES
'''

a=input().strip()
b=""
for i in a:
	if(i in ("aeiouAEIOU")): 
		b=b+i+""
l=0
u=0
for i in b:
	if(i in "aeiou"):
		l+=1
	else:
		u+=1
b=b.strip() 
if(1= len(b) or u== len(b)): 
	print("YES")
else:
	print("NO")
