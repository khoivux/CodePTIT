#include <bits/stdc++.h>
#define ll long long
#define ii pair<ll, ll>
using namespace std;
ll dp[100001];
int mod = 1e9 + 7;
main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	ll t; cin >> t;
	while(t--)
	{
		ll n, k; cin >> n >> k;
		for(int i = 1; i <= n; i++) dp[i] = 0;
		dp[0] = 1;
		for(ll i = 1; i <= n; i++)
		{
			for(ll j = 1; j <= k; j++)
			{
				if(i - j >= 0)
				{
					dp[i] += dp[i - j] % mod;
					dp[i] %= mod;
				}
			}
		}
		cout << dp[n] << endl;
	}	
}