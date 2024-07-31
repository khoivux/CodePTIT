#include <bits/stdc++.h>
#define long long long
#define ii pair<int, int>
using namespace std;

long dp[10001];
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int t; cin >> t;

    memset(dp, 0, sizeof(dp));
    dp[1] = 1; dp[2] = 2; dp[3] = 3; 
    for(int i = 4; i <= 10000; i++)
    {
        long tmp = INT_MAX;
        for(int j = 1; j <= sqrt(10000); j++)
        {
            if(i >= j * j)
            {
                tmp = min(dp[i - j * j], tmp);
            }
        }
        dp[i] = tmp + 1;
    }
    while(t--)
    {
        int n; cin >> n;
        cout << dp[n] << endl;
    }   
}