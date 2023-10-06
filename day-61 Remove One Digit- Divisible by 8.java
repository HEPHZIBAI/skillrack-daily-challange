/*
The program must accept an integer N as the input. The program must form an integer X by removing exactly one digit from N so that X is divisible by 8. The program must print YES if it is possible to form the integer X. Else the program must print NO as the output.

Boundary Condition(s) 10 <= N <= 10^8

Input Format: The first line contains N.

Output Format:

The first line contains YES or NO.

Example Input/Output 1:

Input: 3454

Output YES

Explanation:

After removing the tenth digit 5, the integer becomes 344. Here, the integer 344 is divisible by 8. So YES is printed as the output.

Example Input/Output 2: Input:

79

Output

NO
*/



import java.util.*; 
public class Hello
{
	public static void main(String[] args) 
	{ 
		Scanner sc = new Scanner(System.in);
		String a sc.nextLine(); 
		int len = a.length(), t = 0, c = 0;
		String s = "";
		for (int i=0;i<len;i++) 
		{ 
			s = a.substring(0,i)+a.substring(i+1,len);
			t = Integer.parseInt(s); 
			if(t!=0 && t%8==0) 
			{
				C=1;
				break;
			}
		}
		System.out.print((c==1)?"YES":"NO");
}