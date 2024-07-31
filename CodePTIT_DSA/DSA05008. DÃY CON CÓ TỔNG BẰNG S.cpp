#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;
int dp[201][40001];
main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int t; cin >> t;
	while(t--)
	{
		int n, s; cin >> n >> s;
		int a[n + 1]; 
		dp[0][0] = 1;
		for(int i = 1; i <= n; i++)
		{
			cin >> a[i];
			dp[i][0] = 1;
		}
		for(int i = 1; i <= n; i++)
		{
			for(int j = 1; j <= s; j++)
			{
				if(a[i] <= j)
					dp[i][j] = dp[i - 1][j] || dp[i - 1][j - a[i]];
				else
					dp[i][j] = dp[i - 1][j];
			}
		}
		if(dp[n][s]) cout << "YES";
		else cout << "NO";
		cout << endl;
	}	
}