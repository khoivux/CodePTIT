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
        s = '0' + s;

        long dp[n + 1];
        dp[1] = s[1] - '0';
        long res = dp[1];
        for(int i = 2; i <= n; i++)
        {
            int x = s[i] - '0';
            dp[i] = dp[i - 1] * 10 + x * i;
            res += dp[i];
        }
        cout << res << endl;
    }   
}