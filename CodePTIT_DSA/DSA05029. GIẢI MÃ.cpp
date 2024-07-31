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
		string s; cin >> s;
		int n = s.length();
		if(s[0] == '0')
		{
			cout << 0 << endl; 
			continue;
		}
		s = '0' + s;
		int dp[n + 1];
		memset(dp, 0, sizeof(dp));
		dp[0] = 1;
		dp[1] = 1;
		for(int i = 2; i <= n; i++)
		{
			if(s[i] > '0')	
				dp[i] = dp[i - 1];
				
			if(s[i - 1] == '1' || (s[i - 1] == '2' && s[i] < '7'))
				dp[i] += dp[i - 2];	
		}
		cout << dp[n] << endl;
	}	
}