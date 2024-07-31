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
        int a[n + 1];
        int dp[n + 1];
        int res = 0;
        for(int i = 1; i <= n; i++)
        {
            cin >> a[i];
            dp[i] = a[i];
        }
        dp[0] = 0;
        for(int i = 1; i <= n; i++)
        {
            for(int j = 1; j <= i; j++)
            {
                if(a[j] < a[i])
                {
                    dp[i] = max(dp[j] + a[i], dp[i]);
                }
                //else dp[i] = max(dp[i], dp[j]);
            }
            res = max(res, dp[i]);
        }
        cout << res << endl;
    }   
}