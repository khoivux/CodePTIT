#include <bits/stdc++.h>
#define ll long long
#define ii pair<ll, ll>
using namespace std;

main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int c, n; cin >> c >> n;
	int a[n + 1];
	ll dp[n + 1][c + 1];
	dp[0][0] = 0;
	for(int i = 1; i <= n; i++) cin >> a[i];

	ll res = 0;
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= c; j++)
		{
			if(a[i] < j)
				dp[i][j] = max(dp[i - 1][j - a[i]] + a[i], dp[i - 1][j]);
			else 
				dp[i][j] = dp[i - 1][j];
		}
	}
	cout << dp[n][c];
}