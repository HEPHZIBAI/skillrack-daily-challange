/*
The program must accept an integer matrix of size NxN as the input.The program must print the maximum sum of the layers in the matrix as the output.

Boundary Condition(s):
	3 <= N <= 50
	-100 <= Matrix element value <= 100

Input Format:
	The first line contains N.
	The next N lines each contain N integers separated by a space.

output Format
	The first line contains the maximum sum of the layers in the matrix.

Example Input/Output 1:
	Input:
		4
		1 6 3 4
		2 3 4 2
		3 4 5 5
		4 5 6 7
	Output: 
		48
	Explanation:
		The outermost layer of the matrix is highlighted below.
		1 6 3 4
		2 3 4 2
		3 4 5 5
		4 5 6 7
		The sum of the integers in the outermost layer is 48 (1+6+3+4+2+5+7+6+5+4+3+2).
		The innermost layer of the matrix is highlighted below.
		1 6 3 4
		2 3 4 2
		3 4 5 5
		4 5 6 7
		The sum of the integers in the innermost layer is 16 (3+4+5+4).
		The maximum sum is 48.
		Hence the output is 48Example Input/Output 2: 
*/


#include <bits/stdc++.h> 
#define int long long
using namespace std;
signed main(int argc, char** argv)
{
	int n,x,ans=INT_MIN; 
	cin>>n;map<int,int> mp;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>x;
			int val=min(i,min(j,min(n-i-1,n-j-1))); 			mp[val]+=x;
		}
	}
	for (auto&it: mp)
		ans=max(ans,it.second);;

	cout<<ans;
}