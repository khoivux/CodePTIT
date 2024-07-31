#include <bits/stdc++.h>
using namespace std;
main()
{
	int t; cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int a[n][n];
		for(int i = 0; i < n; i++)
			for(int j = 0; j < n; j++) cin >> a[i][j];
	
		map <int, int> mp;
		for(int i = 0; i < n; i++)
		{
			set <int> s;
			for(int j = 0; j < n; j++) 
			{
				s.insert(a[i][j]);
			}
			for(auto x : s) mp[x]++;
		}
		int cnt = 0;
		for(auto x : mp)
		{
			if(x.second == n) cnt++;
		}
		cout << cnt << endl;
			
	}
}