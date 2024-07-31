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
		vector <char> v;
		long long sum = 0;
		for(int i = 0; i < s.length(); i++)
		{
			if(isalpha(s[i])) v.push_back(s[i]);
			else if(isdigit(s[i])) sum += s[i] - '0';
		}

		sort(v.begin(), v.end());
		for(auto x : v) cout << x;
		cout << sum;
		cout << endl;
	}
}