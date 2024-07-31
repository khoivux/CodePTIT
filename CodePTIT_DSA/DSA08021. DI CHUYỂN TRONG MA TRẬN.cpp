#include <bits/stdc++.h>
#define long long long
#define ii pair<int, int>
using namespace std;
int m, n;
int a[1001][1001], d[1001][1001];
void solve()
{
    memset(d, -1, sizeof(d));
    int i, j, x;
    queue<ii> q;
    q.push({1, 1});
    d[1][1] = 0;
    while(!q.empty())
    {
        ii t = q.front();
        i = t.first, j = t.second;
        x = a[i][j];
        q.pop();

        if(d[i][j + x] == -1)
        {
            q.push({i, j + x});
            d[i][j + x] = d[i][j] + 1;
        }
        if(d[i + x][j] == -1)
        {
            q.push({i + x, j});
            d[i + x][j] = d[i][j] + 1;
        }
    }
    cout << d[m][n] << endl;
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t; cin >> t;
    while(t--)
    {
        cin >> m >> n;
        for(int i = 1; i <= m; i++)
        {
            for(int j = 1; j <= n; j++)
            {
                cin >> a[i][j];
            }
        }
        solve();
    }
}