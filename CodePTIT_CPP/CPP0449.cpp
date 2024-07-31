#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool cmp(string a, string b)
{
	return a + b > b + a;
}
main()
{
	int t; cin >> t;
	while(t--)
	{
		ll n, x; cin >> n >> x; 
		ll a[n];
		set <ll> se;
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
			se.insert(a[i]);
		}
		int res = -1;
		for(int i = 0; i < n; i++)
		{
			if(se.count(a[i] - x)!=0)
			{
				res = 1;
				break;
			}
		}
		cout << res << endl;
	}
}