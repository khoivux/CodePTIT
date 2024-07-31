#include <bits/stdc++.h>
#define long long long
#define ii pair<long, long>
using namespace std;

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    long t; cin >> t;
    while(t--)
    {
        long n, m; cin >> n >> m;
        long dp[n + 5][m + 5];
        for(long i = 0; i <= n; i++)
        {
            for(long j = 0; j <= m; j++)
            {
                if(i == 0 || j == 0) 
                    dp[i][j] = 1;
            }
        }
        dp[0][0] = 0;
        for(long i = 1; i <= n; i++)
        {
            for(long j = 1; j <= m; j++)
            {
                dp[i][j] = dp[i -1][j] + dp[i][j - 1];
            }
        }
        cout << dp[n][m] << endl;
    }
}