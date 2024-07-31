#include <bits/stdc++.h>
#define long long long
#define ii pair<int, int>
using namespace std;

int n, m;
vector<vector<int>> adj;
bool used[1010];
int pre[1010];
bool DFS(int u)
{
    used[u] = true;
    for(auto v : adj[u])
    {
        if(!used[v])
        {
            used[v] = true;
            pre[v] = u;
            if(DFS(v)) return true;
        }
        else if(v != pre[u]) return true;
    }
    return false;
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
        memset(used, false, sizeof(used  ));
        memset(pre, 0, sizeof(pre));
        adj.clear(); adj.resize(n + 1000);
        for(int i = 0; i < m; i++)
        {
            int x, y; cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        for(int i = 1; i <= n; i++) sort(adj[i].begin(), adj[i].end());
        int ok = 0;
        for(int i = 1; i <= n; i++)
        {
            memset(used, false, sizeof(used));
            if(DFS(i))
            {
                ok = 1;
                break;
            }
        }
        if(ok) cout << "YES";
        else cout << "NO";
        cout << endl;
    }
}