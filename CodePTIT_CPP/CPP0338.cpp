#include <bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s; cin >> s;
		int k; cin >> k;
		cin.ignore();
		int cnt = 0;
		for(int i = 0; i < s.length(); i++)
		{
			set <int> se;
			for(int j = i; j < s.length(); j++)
			{
				int x = s[j] - '0';
				se.insert(x);
				if(se.size() == k) cnt++;
			}
		}
		cout << cnt << endl;
	}
}
