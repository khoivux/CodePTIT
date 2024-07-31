#include <bits/stdc++.h>
using namespace std;

bool valid(string s)
{
	for(int i = 0; i < s.length(); i++)
	{
		if(!isdigit(s[i])) return false;
	}
	return true;
}

main()
{
	int t; cin >> t;
	cin.ignore();
	while(t--)
	{
		string s;
		getline(cin, s);
		set <int> se;
		int ok = 1;
		if(!valid(s) || s[0] == '0') cout << "INVALID";
		else
		{
			for(int i = 0; i < s.length(); i++)
			{
				int a = s[i] - '0';
				se.insert(a);
			}
			for(int i = 0; i <= 9; i++)
			{
				if(se.count(0) == 0)
				{
					ok = 0;
					break;
				} 
			}
			if(ok) cout << "YES";
			else cout << "NO";
		}
		cout << endl;
	}
}