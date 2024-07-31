#include <bits/stdc++.h>
using namespace std;

main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		int cnt[50] = {0};
		for(int i = 0; i < s.length(); i++)
			cnt[s[i] - 'A']++;
			
		for(int i = 0; i < s.length(); i++)
		{
			if(cnt[s[i] - 'A'] == 1) cout << s[i];
		}
		cout << endl;
	}
}