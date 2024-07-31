#include<bits/stdc++.h>
#define ll long long 
using namespace std;

void solve(int n)
{
	while(n >= 10)
	{
		int tmp = 0;
		while(n)
		{
			tmp += n %10;
			n /= 10;
		}
		n = tmp;
	}
	cout << n << endl;
}
main()
{	
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		solve(n);
	}
}