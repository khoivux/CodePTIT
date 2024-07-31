#include <bits/stdc++.h>
#define long long long
#define ii pair<int, int>
using namespace std;
int n, m;
vector<vector<int>> adj;
bool used[1001];

void BFS(int s)
{
    queue<int> q;
    q.push(s);
    used[s] = true;
    while(!q.empty()) 
    {
        int u = q.front();
        q.pop();
        for(auto v : adj[u])
        {
            if(!used[v]) 
            {
                used[v] = true;
                q.push(v);
            }
        }
    }
}
int count() 
{
    int res = 0;
    for(int i = 1; i <= n; i++)
    {
        if(!used[i])
        {
            BFS(i);
            res++;
        }
    }
    return res;
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
        cout << count() << endl;
    }   
}