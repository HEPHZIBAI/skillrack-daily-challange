/*

The program must accept an integer N as the input. The program must print the product P of the first half of the digits in N and the second half of the digits in N as the output. Note: The number of digits in N is always even.

Boundary Condition(s):
	10 <= N <10^8

Input Format:
	The first line contains N.

Output Format:
	The first line contains P.

Example Input/Output 1:
	Input:
		5418
	Output: 
		972
	Explanation:
		The first half of the digits in 5418 is 54.
		The second half of the digits in 5418 is 18.
		So their product 972 (54 * 18) is printed as the output.

Example Input/Output 2:
	Input:
		150050
	Output:
		7500
*/

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char ** argv)

{
	string s; cin>>s;
	int n= s.size();
	cout<<stoi(s.substr(0,n/2))*stoi(s.substr(n/2));
}