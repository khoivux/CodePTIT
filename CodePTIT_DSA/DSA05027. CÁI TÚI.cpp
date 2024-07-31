#include <bits/stdc++.h>
#define ll long long
#define ii pair<ll, ll>
using namespace std;

main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int t; cin >> t;
	while(t--)
	{
		int n, v; cin >> n >> v;
		int a[n + 1], c[n + 1];
		int dp[n + 1][v + 1];

		for(int i = 0; i <= n; i++)
		{
			for(int j = 0; j <= v; j++)
				dp[i][j] = 0;
		}
		for(int i = 1; i <= n; i++) cin >> a[i];
		for(int i = 1; i <= n; i++) cin >> c[i];

		for(int i = 1; i <= n; i++)
		{
			for(int j = 1; j <= v; j++)
			{
				if(a[i] <= j)
					dp[i][j] = max(dp[i - 1][j - a[i]] + c[i], dp[i - 1][j]);
				else
					dp[i][j] = dp[i - 1][j];
			}
		}
		cout << dp[n][v] << endl;
	}
}