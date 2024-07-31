#include <bits/stdc++.h>
#define long long long
#define ii pair<int, int>
using namespace std;
int n, m;
vector<vector<int>> adj;
int color[1001];
int check = 0;
void DFS(int u)
{
    color[u] = 1;
    for(int v : adj[u])
    {
        if(color[v] == 0)
        {
            DFS(v);
        }
        else if(color[v] == 1)
        {
            check = 1;
        }
    }
    color[u] = 2;
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
        memset(color, 0, sizeof(color));            
        check = 0;
        adj.clear(); adj.resize(n + 11);
        for(int i = 0; i < m; i++)
        {
            int x, y; cin >> x >> y;
            adj[x].push_back(y);
        }

        for(int i = 1; i <= n; i++)
        {
            if(color[i] == 0) DFS(i);
        }
        if(check) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
}