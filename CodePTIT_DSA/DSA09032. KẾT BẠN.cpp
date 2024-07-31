#include <bits/stdc++.h>
#define long long long
#define ii pair<int, int>
using namespace std;
int n, m;
vector<vector<int>> adj;
bool used[100001];
int cnt = 1;

void DFS(int u)
{
    used[u] = true;
    for(auto v : adj[u])
    {
        if(!used[v])
        {
            cnt++;
            used[v] = true;
            DFS(v);
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
        memset(used, false, sizeof(used));
        adj.clear(); adj.resize(n + 1000);

        for(int i = 0; i < m; i++) {
            int x, y; cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        for(int i = 1; i <= n; i++)
        {
            sort(adj[i].begin(), adj[i].end());
        }
        int res = -1;
        for(int i = 1; i <= n; i++)
        {
            if(!used[i])
            {
                cnt = 1;
                DFS(i);
                res = max(res, cnt);
            }
        }
        cout << res << endl;
    }   
}