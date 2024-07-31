#include <bits/stdc++.h>
#define ll long long

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
        long long dp[n + 1] = {0};

        for(int i = 1; i <= n; i++)
        {
            cin >> a[i];
        }
        dp[1] = a[1];
        dp[0] = 0;
        for(int i = 2; i <= n; i++)
        {
            dp[i] = max(dp[i - 1], dp[i - 2] + a[i]);
        }
        cout << dp[n] << endl;
    }
}
