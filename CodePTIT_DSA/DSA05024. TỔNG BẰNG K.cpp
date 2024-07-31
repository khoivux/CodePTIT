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
        int n, k; cin >> n >> k;
        int a[n + 1];
        int dp[k + 1];
        memset(dp, 0, sizeof(dp));
        for(int i = 1; i <= n; i++) 
        {
            cin >> a[i];
        }
     
        dp[0] = 1;
        for(int i = 1; i <= k; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                if(i >= a[j])
                {
                    dp[i] += dp[i - a[j]] % mod;
                    dp[i] %= mod;
                }
            }
        }
        cout << dp[k] << endl;
    }   
}