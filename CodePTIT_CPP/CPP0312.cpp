#include <bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cin.ignore();
		string s;
		int k;
		cin >> s >> k;
		if(s.length() < 26)
		{
			cout << 0;
			continue;
		}
		map<char, int> mp;
		for(int i = 0; i < s.length(); i++)
		{
			mp[s[i]] = 1;
		}
		int cnt = 0;
		for(auto it : mp)
		{
			if(it.second == 1) cnt++;
		}
		if(k >= 26 - cnt) cout << 1;
		else cout << 0;
		cout << endl;
	}
}