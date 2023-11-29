/*
You must implement the function hidePassword(char str[]) which accepts a string str as the input. The function must calculate the number of alphabets A in str and the number of digits D in str. Then the function must modify the string str by replacing each alphabet by (asterisk) if A is greater than or equal to D. Else the function must modify the string str by replacing each digit by (asterisk).
Note: The string str contains at least 1 alphabet and 1 digit.

Example Input/Output 1:
	Input: 
		s1r2a3ck
	Output
		1*2*3**
	Explanation:
		Here the string str is s1r2a3ck. The count of alphabets in s1r2a3ck is 5 and the count of digits in s1r2a3ck is 3. Here 5 is greater than 3, so the alphabets are replaced by (asterisk). Hence the output is 1*2*3*

Example Input/Output 2:
	Input:
		123ABCD007
	Output
		8**ABCD8**
*/


void hidePassword (char str[]) 
{
	int a=0,n=0;
	for(int i=0;i<strlen(str); i++) 
	{
		if(str[i]>='0' && str[i]<='9')
			n++; 
		else
			a++;
	}
	if(a>=n)
	{
		for(int i=0;i<strlen(str); i++) 
		{
			if(!(str[i]>='0' && str[i]<='9')) 
				str[i]='*';
		}
	}
	else
	{
		for(int i=0;i<strlen(str); i++) 
		{
			if(str[i]>='0'&&str[i]<='9') 
				str[i]='*';
		}
	}
}
