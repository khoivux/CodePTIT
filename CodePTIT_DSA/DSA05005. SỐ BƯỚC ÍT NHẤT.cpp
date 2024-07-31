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
		int n; cin >> n;
		int a[n], dp[n];
		int tmp = 0;
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
			dp[i] = 1;
		}
		for(int i = 0; i < n; i++)
		{
			int cnt = 0;
			for(int j = 0; j < i; j++)
			{
				if(a[j] <= a[i])
					cnt = max(cnt, dp[j]);
			}
			dp[i] = cnt + 1;
			tmp = max(tmp, dp[i]);
		}
		cout << n - tmp << endl;
	}	
}