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
		string s1, s2;
		cin >> s1 >> s2;
		int n = s1.length(), m = s2.length();
		s1 = '0' + s1;
		s2 = '0' + s2;

		int dp[n + 1][m + 1];
		for(int i = 0; i <= n; i++)
		{
			for(int j = 0; j <= m; j++)
			{
				if(i == 0 || j == 0) dp[i][j] = 0;
			}
		}
		for(int i = 1; i <= n; i++)
		{
			for(int j = 1; j <= m; j++)
			{
				if(s1[i] == s2[j])
					dp[i][j] = dp[i - 1][j - 1] + 1;
				else 
					dp[i][j] = max({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]});
			}
		}
		cout << dp[n][m] << endl;
	}
}