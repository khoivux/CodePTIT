#include <bits/stdc++.h>
#define long long long
#define ii pair<int, int>
using namespace std;

int n, m; 
vector<vector<int>> adj;
int ok = 1;
int color[1001];

void DFS(int u)
{
    for(auto v : adj[u])
    {
        if(color[v] == 0)
        {
            if(color[u] == 1) 
                color[v] = 2;
            else 
                color[v] = 1;

            DFS(v);
        }
        else if(color[v] == color[u]) 
        {
            ok = 0;
            return;
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
        adj.clear(); adj.resize(n + 100);
        for(int i = 0; i < m; i++)
        {
            int x, y; cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        memset(color, 0, sizeof(color));
        ok = 1;
        for(int i = 1; i <= n; i++)
        {
            if(color[i] == 0)
            {
                color[i] = 1;
                DFS(i);
            }
        }
        if(ok == 1) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
}