#include <bits/stdc++.h>
using namespace std;

void solve(string a, string b)
{
	string res = "";
	int size = max(a.length(), b.length());
	while(b.length() < size) b = "0" + b;
	while(a.length() < size) a = "0" + a;
	int memo = 0;
	
	for(int i = size - 1; i >= 0; i--)
	{
		int tmp = (a[i] - '0') + (b[i] - '0') + memo;
		if(tmp < 10)
		{
			res = char(tmp + '0') + res;
			memo = 0;
		}
		else
		{
			tmp = tmp % 10;
			res = char(tmp + '0') + res; 
			memo = 1;
		}
	}
	if(memo) res = char(memo + '0') + res;
	cout << res << endl;
}
main()
{
	int t; cin >> t;
	while(t--)
	{
		string a, b;
		cin >> a >> b; 
		solve(a, b);	
	}	
}