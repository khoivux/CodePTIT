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
        int n; cin >> n;
        vector<ii> v;
        for(int i = 0; i < n; i++)
        {
            int x, y; cin >> x >> y;
            v.push_back({x, y});
        }
        int dp[1000];
        for(int i = 0; i <= v.size();  i++) 
            dp[i] = 1;

        sort(v.begin(), v.end());
        int res = 1;
        for(int i = 1; i < v.size(); i++)
        {
            for(int j = 0; j < i; j++)
            {
                if(v[i].first > v[j].second)
                {
                    dp[i] = max(dp[i], dp[j] + 1);
                }             
            }
            res = max(res, dp[i]);
        }  
        cout << res << endl; 
    }   
}