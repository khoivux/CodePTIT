#include <bits/stdc++.h>
#define ll long long

using namespace std;
int n, k;
int x[10000];
vector<string> v;

bool isFinal()
{
    for(int i = 1; i <= n; i++)
    {
        if(x[i] == 0)
            return false;
    }
    return true;
}

void solve()
{
    int dp[100000];
    dp[0] = 0;
    int cnt = 0;
    for(int i = 1; i <= n; i++)
    {
        if(x[i] == 0)
        {
            dp[i] = dp[i - 1] + 1;
        }
        else dp[i] = 0;
        if(dp[i] >= k) cnt++;
    }
    if(cnt == 1)
    {
        string s = "";
        for(int i = 1; i <= n; i++)
        {
            s += 'A' + x[i];
        }
        v.push_back(s);
    }
}

void nextGen()
{
    int i = n;
    while(i >= 1 && x[i] == 1)
    {
        x[i] = 0;
        i--;
    }
    if(i >= 1) x[i] = 1;
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    cin >> n >> k;
    for(int i = 1; i <= n; i++) x[i] = 0;
    while(!isFinal())
    {
        solve();
        nextGen();
    }
    solve();
    cout << v.size() << endl;
    for(auto it : v) cout << it << endl;
}