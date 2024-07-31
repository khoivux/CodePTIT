#include <bits/stdc++.h>
using namespace std; 
main()
{
	int t; cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		map <char, int> mp;
		int maxx = 0;
		for(int i = 0; i < s.length(); i++)
		{
			mp[s[i]]++; 
			maxx = max(maxx, mp[s[i]]);
		}
		int cl = s.length() - maxx;
		if(cl >= maxx - 1) cout << 1;
		else cout << 0;
		cout << endl;
	}
}