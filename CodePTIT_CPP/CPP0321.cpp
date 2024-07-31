#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(string a, string b)
{
	int size = max(a.length(), b.length());
	while(a.length() < size) a = "0" + a;
	while(b.length() < size) b = "0" + b;	
	
	if(a < b) swap(a, b);
	
	string res = " ";
	int memo = 0;
	for(int i = size - 1; i >= 0; i--)
	{
		int tmp = (a[i] - '0') - (b[i] - '0') - memo;
		if(tmp >= 0)
		{
			memo = 0;
			res = char(tmp + '0') + res;
		}
		else
		{
			memo = 1;
			tmp += 10;
			res = char(tmp + '0') + res;
		}
	}
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