/*
The program must accept a string S (encrypted string) containing only alphabets as
the input. The encryption algorithm is given below. 
	The first character occurs only once.
	The second character occurs twice.
	The third character occurs thrice and so on. 
The program must decrypt the string S and print it as the output.
Note: The string S is always a valid encrypted string.

Boundary Condition(s): 
	1< Length of S <= 1000

Input Format:
	The first line contains S.

Output Format:
	The first line contains the decrypted string of S.

Example Input/Output 1:
	Input:
		baabbb
	Output
		bab
	Explanation:
		baabbb can be decrypted as bab. So bab is printed as the output.

Example Input/Output 2:
	Input:
		ooopppssss
	Output
		oops
*/
a=input()
i=0
j=1
b=''
while(i<len(a)):
	b+=a[i]
	i+=j
	j+=1
print(b)
