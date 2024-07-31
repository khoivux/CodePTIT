#include <bits/stdc++.h>
#define long long long
#define ii pair<int, int>
using namespace std;
int mod = 1e9 + 7;
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int t; cin >> t;
    while(t--)
    {
        string s1, s2; cin >> s1 >> s2;
        int n = s1.length(), m = s2.length();
        s1 = '0' + s1;
        s2 = '0' + s2;
        long dp[n + 1][m + 1];
        memset(dp, 0, sizeof(dp));

        for(int i = 1; i <= n; i++) dp[i][0] = i;
        for(int i = 1; i <= m; i++) dp[0][i] = i;

        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= m; j++)
            {
                if(s1[i] == s2[j]) dp[i][j] = dp[i - 1][j - 1];
                else dp[i][j] = min({dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]}) + 1;
            }
        }
        cout << dp[n][m] << endl;
    }   
}