#include <bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin >> t;
	cin.ignore();
	while(t--)
	{
		string s;
		cin >> s;
		long long suml = 0, sumc = 0;
		for(int i = 0; i < s.length(); i++)
		{
			int t = s[i] -'0';
			if((i + 1) % 2) suml += t;
			else sumc += t;
		}
		if((suml - sumc) % 11 == 0) cout << 1;
		else cout << 0;
		cout << endl;
	}
}