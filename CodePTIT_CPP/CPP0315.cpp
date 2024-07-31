#include <bits/stdc++.h>
using namespace std;

void solve(string s)
{
	int ok = 0;
	for(int i = s.length() - 2; i >= 0; i--)
	{
		int maxx = -1;
		int id = 0;
		for(int j = i + 1; j < s.length(); j++)
		{
			if(s[j] < s[i] && s[j] - '0' > maxx)
			{
				maxx = s[j] - '0';
				id = j;
			}
		}
		if(maxx >= 0)
		{	
			ok = 1;
			swap(s[i], s[id]);
			break;
		}
	}
	if(ok)	cout << s;
	else cout << -1;
	cout << endl;
}
main()
{
	int t; cin >> t;
	while(t--)
	{
		string s;
		cin >> s;

		solve(s);
	}
}