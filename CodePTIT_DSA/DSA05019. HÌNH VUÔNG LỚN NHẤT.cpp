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
        int n, m; cin >> n >> m;
        int a[n + 1][m + 1];
        int dp[n + 1][m + 1];
        memset(dp, 0, sizeof(dp));
        int res = 0;
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= m; j++)
            {
                cin >> a[i][j];
            }
        }
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= m; j++)
            {
                if(a[i][j])
                {
                    dp[i][j] = min({
                                    dp[i - 1][j - 1] + 1,
                                    dp[i - 1][j] + 1,
                                    dp[i][j - 1] + 1,
                                });
                    res = max(res, dp[i][j]);
                }
            }
        }
        cout << res << endl;
    }
}