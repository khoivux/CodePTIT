#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;

int dp[100001];
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int t; t = 1;
    while(t--)
    {
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
            dp[a[i]] = 0;
        }
        dp[0] = 0;
        int res = 0;
        for(int i = 0; i < n; i++)
        {
            dp[a[i]] = dp[a[i] - 1] + 1;
            res = max(res, dp[a[i]]);
        }
        cout << n - res << endl;
    }   
}