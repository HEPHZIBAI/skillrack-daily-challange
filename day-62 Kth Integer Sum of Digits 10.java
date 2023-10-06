/*
The program must accept an integer K as the input. The program must print the Kth integer in the series given below.
19, 28, 37, 46, 55, 64, 73, 82, 91, 109, 118 and so on.
Note: The sum of digits in each integer of the above series is exactly 10.

Boundary Condition(s): 1 <= K <= 1000

Input Format:
	The first line contains K.

Output Format:
	The first line contains the Kth integer in the above mentioned series.

Example Input/Output 1:
	Input: 
		4
	Output
		46
	Explanation:
		The 4th integer in the series is 46 (4+ 6 = 10). So 46 is printed as the output.

Example Input/Output 2:
	Input 
		7
	Output 
		73
*/


import java.util.*;
public class Hello 
{
	public static int s(int n)
	{
		int s=0; 
		while(n>0)
		{
			S+=n%10;
			n/=10;
		} 
		return s;
	}
	public static void main(String[] args) 
	{
		Scanner sc=new Scanner(System.in); 
		int n=sc.nextInt(),i,k=19;
		n=n-1;
		while(n!=0)
		{
			k++;
			if(s(k)==10)
				n--;
		} 
		System.out.print(k); 
	}
}