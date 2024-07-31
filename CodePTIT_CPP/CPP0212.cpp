#include <bits/stdc++.h>
#define ll long long
using namespace std;

main()
{
	int mod = 1e9 + 7;
	int t; cin >> t;
	while(t--)
	{
		int n;
		int x;
		cin >> n >> x;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		reverse(a, a + n);
		ll tmp = 1;
		ll res = 0;
		for(int i = 0; i < n; i++)
		{
			res = (res + tmp * a[i]) % mod;
			tmp = tmp * x % mod;
		}
		cout << res << endl;
	}
}