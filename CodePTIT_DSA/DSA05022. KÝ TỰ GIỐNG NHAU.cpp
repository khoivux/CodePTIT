#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    ll t; cin >> t;
    while(t--)
    {
        ll n; cin >> n;
        ll x, y, z; cin >> x >> y >> z;
        ll dp[n + 1];
        memset(dp, 0, sizeof(dp));
        dp[1] = x;
        for(ll i = 2; i <= n; i++)
        {
            if(i % 2 == 0)
                dp[i] = min(dp[i - 1] + x, dp[i / 2] + z);
            else 
                dp[i] = min(dp[i - 1] + x, dp[(i + 1) / 2] + y + z);
        }
        cout << dp[n] << endl;
    }  
}