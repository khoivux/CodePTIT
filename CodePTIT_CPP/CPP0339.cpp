#include <bits/stdc++.h>
using namespace std;

bool check(string s)
{
	int n = s.length();
	if(s[0] == s[n - 1]) return true;
	else return false;
}
main()
{
	int t;
	cin >> t;
	cin.ignore();
	while(t--)
	{
		string s;
		cin >> s;
		int res = 0;
		for(int i = 0; i < s.length(); i++)
		{
			for(int j = 1; j <= s.length() - i; j++)
			{
				string tmp = s.substr(i, j);
				if(check(tmp)) res++;
			}
		}
		cout << res << endl;
	}
}