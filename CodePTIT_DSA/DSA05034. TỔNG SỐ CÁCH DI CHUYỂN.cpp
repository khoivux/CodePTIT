#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;

main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int mod = 1e9 + 7;
	int t; cin >> t;
	while(t--)
	{
		int n, k; cin >> n >> k;
		int dp[n + 1];
		memset(dp, 0, sizeof(dp));
		dp[0] = 1;
		for(int i = 1; i <= n; i++)
		{
			for(int j = 1; j <= k; j++)
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