#include <bits/stdc++.h>
using namespace std;
using ll = long long;
main()
{
	int t; cin >> t;
	while(t--)
	{
		ll n, k; cin >> n >> k;
		ll a[n];
		for(int i = 0; i < n; i++) 
		{
			cin >> a[i];
		}	   
		sort(a, a + n);
		ll res = 0;
		for(int i = 0; i < n; i++)
		{
			auto it = lower_bound(a, a + n, a[i] + k);
			ll id = it - a;
			res = res + id - i - 1;
		}	
		cout << res << endl;
	}
}