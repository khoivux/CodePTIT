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
        int n;
        cin >> n;
        float a[n + 1], b[n + 1];
        int dp[n + 1];

        dp[0] = 0;
        int res = -1;
        for(int i = 1; i <= n; i++)
        {
            cin >> a[i] >> b[i];
            dp[i] = 1;
            for(int j = 1; j < i; j++)
            {
                if(a[i] > a[j] && b[i] < b[j])
                {
                    dp[i] = max(dp[j] + 1, dp[i]);
                }
            }
            res = max(res, dp[i]);
        }
        cout << res << endl;
    }
}