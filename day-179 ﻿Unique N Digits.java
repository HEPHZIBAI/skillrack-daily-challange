/*
The program must accept an integer N as the input. The program must print the count of integers which are having exactly N unique digits as the output.

Note: You must optimize the logic. Else the program will time out.

Boundary Condition(s):
	1 <= N <= 9

Input Format:
	The first line contains N.

Output Format:
	The first line contains the count of integers which are having exactly N unique digits.

Example Input/Output 1:
	Input:
		2
	Output: 
		81
	Explanation:
		Here N=2, the integers which are having exactly 2 digits are 10 to 99. 
		The number of integers from 10 to 99 is 90.
		The integers with non-unique(duplicated) digits from 10 to 99 are 11, 22, 33, 44, 55, 66, 77, 88 and 99 and its count is 9.
		The number of integers with exactly 2 unique digits is 81 (90 - 9 = 81). 
		Hence the output is 81

Example Input/Output 2:
	Input:
		3
	Output: 
		648
*/
import java.util.*;
public class Hello 
{
	public static void main(String[] args) 
	{
		Scanner sc = new Scanner(System.in); 
		int n = sc.nextInt(),c = 9, p = 9; 
		if(n==1) 
			System.out.print(10); 
		else if(n>1) 
		{
			while(--n>0) 
			{
				c*=p; p--. --; 
			}
			System.out.print(c);
		} 
		else 
			System.out.print(0);
	}
}