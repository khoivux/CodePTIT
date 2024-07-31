#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;

int dp[101][101][101];
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t; cin >> t;
    while(t--)
    {
        memset(dp, 0, sizeof(dp));
        int n, m, r;
        cin >> n >> m >> r;
        string s1, s2, s3;
        cin >> s1 >> s2 >> s3;
        int res = 0;
        s1 = '0' + s1;
        s2 = '0' + s2;
        s3 = '0' + s3;
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= m; j++)
            {
                for(int k = 1; k <= r; k++)
                {
                    if(s1[i] == s2[j] && s2[j] == s3[k])
                    {
                        dp[i][j][k] = dp[i - 1][j - 1][k - 1] + 1;
                    }
                    else 
                    {
                        dp[i][j][k] = max({
                                        dp[i - 1][j][k], 
                                        dp[i][j - 1][k],
                                        dp[i][j][k - 1]
                                    });
                    }
                    res = max(res, dp[i][j][k]);
                }       
            }
        }
        cout << res << endl;
    }   
}