#include <bits/stdc++.h>
#define long long long
#define ii pair<int, int>
using namespace std;

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    long mod = 1e9 + 7;
    long dp[10001];
    long a[1000];
    dp[1] = 10;
    for(int i = 1; i <= 10; i++) a[i] = 1;
    for(int i = 2; i <= 100; i++)
    {
        for(int j = 1; j <= 9; j++)
        {
            long s = 0;
            for(int k = j; k <= 9; k++)
            {
                s += a[k];
            }
            a[j] = s;
            dp[i] = (dp[i] + s) % mod;
        }
    }
    for(int i = 2; i <= 100; i++)
    {
        dp[i] = (dp[i] + dp[i - 1]) % mod;
    }
    int t; cin >> t;
    while(t--)
    {
        int n; cin >> n;
        cout << dp[n] << endl;
    }
}