#include <bits/stdc++.h>
#define long long long
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
        int dp[n + 1][n +1];
        memset(dp, 0, sizeof(dp));

        for (int i = 0; i < n; i++)dp[i][i] = 1;
        for (int i = n - 1; i >= 0; i--) 
        {
            for (int j = i + 1; j < n; j++) 
            {
                if (s[i] == s[j])
                    dp[i][j] += dp[i + 1][j - 1] + 2;
                else 
                    dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
            }
        }
        //Tim day doi xung dai nhat
        cout <<  n-dp[0][n - 1] << endl;
    }
}