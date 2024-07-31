#include <bits/stdc++.h>
using namespace std;
main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int a[n];
		map <int, int> mp;
		int ok = -1;
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < n; i++)
		{
			mp[a[i]]++;
			if(mp[a[i]] == 2)
			{
				ok = a[i];
				break;
			}
		}
		cout << ok << endl;
	}
}