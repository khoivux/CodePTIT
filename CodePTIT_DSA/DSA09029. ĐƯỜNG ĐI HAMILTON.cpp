#include <bits/stdc++.h>
#define long long long
#define ii pair<int, int>
using namespace std;
int n, m;
vector<vector<int>> adj;
bool used[1001];
int ok = 0;
int cnt = 0;
void Hamilton(int u, int cnt)
{
    if(cnt == n) ok = 1;
    if(ok) return;
    for(auto v : adj[u])
    {
        if(!used[v])
        {
            used[v] = true;
            Hamilton(v, cnt + 1);
            used[v] = false;
        }
    }
}

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t; cin >> t;
    while(t--)
    {
        cin >> n >> m;
        ok = 0;
        adj.clear(); adj.resize(n + 1000);

        for(int i = 0; i < m; i++)
        {
            int x, y; cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        for(int i = 1; i <= n; i++)
        {
            memset(used, false, sizeof(used));
            used[i] = true;
            Hamilton(i, 1);
            if(ok) break; 
        }
        cout << ok << endl;
    }
}