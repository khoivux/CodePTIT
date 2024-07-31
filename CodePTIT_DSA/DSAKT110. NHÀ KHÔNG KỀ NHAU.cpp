#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;

main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int t; cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int a[n + 1];
		int dp[n + 1];
		memset(dp, 0, sizeof(dp));
		for(int i = 1; i <= n; i++) cin >> a[i];
		dp[0] = 0;
		dp[1] = a[1]; 
	
		for(int i = 2; i <= n; i++)
		{
			dp[i] = max(dp[i - 2] + a[i], dp[i - 1]);
		}
		cout << dp[n] << endl;
	}
}