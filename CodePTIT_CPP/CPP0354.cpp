#include <bits/stdc++.h>

using namespace std;
main()
{
	int t; cin >> t;
	cin.ignore();
	
	while(t--)
	{
		string s;
		getline(cin , s);
		int cnt = 1;
		int i = 0;
		while(i < s.length())
		{
			int j = i;
			while(s[j] == s[i]) j++;

			cout << s[i] << j - i;
			
			i = j;
		}
		cout << endl;
	}
}