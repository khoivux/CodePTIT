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
        s = ' ' + s;
        bool dp[1001][1001];
        int res = 1;
        memset(dp, false, sizeof(dp));
        for(int i = n; i >= 1; i--)
        {
            for(int j = i; j <= n; j++)
            {
                if(i == j) dp[i][j] = true;
                else if(s[i] == s[j])
                {
                    if(j - i == 1) dp[i][j] = true;
                    else dp[i][j] = dp[i + 1][j - 1];
                }
                if(dp[i][j]) res = max(res, j - i + 1);
            }
        }
        cout << res << endl;
   }
}