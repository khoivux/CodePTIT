#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll solve(ll a, ll b,ll c)
{
	if(b == 0) return 1;
	if(b == 1) return a;
	
	ll tmp = solve(a, b / 2, c);
	ll res = 2 * tmp % c;
	if(b % 2) res = (res + a % c) % c;
	
	return res;
}
main()
{
	int t; cin >> t;
	while(t--)
	{
		long long a, b, c;
		cin >> a >> b >> c;
	
		cout << solve(a, b, c) << endl;
	}
}