#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll solve(ll n, ll k,ll mod)
{
	if(k == 0) return 1;
	if(k == 1) return n % mod;
	int x = solve(n, k / 2, mod);
	if(k % 2 == 1) return (n % mod * ((x% mod)*(x % mod)% mod))%mod ;
	else return ((x% mod)*(x % mod))% mod;
}

main()
{
	int t; cin >> t;
	while(t--)
	{
		ll n, k;
		ll mod;
		cin >> n >> k >> mod;
		cout << solve(n, k, mod);
		cout << endl; 
	}
	
}