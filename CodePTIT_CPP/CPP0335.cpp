#include <bits/stdc++.h>
#define ll long long
using namespace std;
main()
{
	int t; cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		vector <int> v;
		int tmp = 0;
		for(int i = 0; i <= s.length(); i++)
		{	
			if(isdigit(s[i]))
			{
				tmp = tmp * 10 + (s[i] - '0');
			}
			else if(i == s.length() || !isdigit(s[i]))
			{
				v.push_back(tmp);
				tmp = 0;
			}
		}
		sort(v.begin(), v.end());
		cout << v[v.size() - 1] << endl;
	}
}