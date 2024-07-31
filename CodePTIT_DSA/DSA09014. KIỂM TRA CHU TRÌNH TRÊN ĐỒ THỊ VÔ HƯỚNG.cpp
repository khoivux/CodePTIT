#include <bits/stdc++.h>
#define long long long
#define ii pair<int, int>
using namespace std;
int n, m;
vector<vector<int>> adj;
bool used[1001];
int pre[1001];
bool BFS(int u)
{
    queue <int> q;
    q.push(u);
    used[u] = true;
    while(!q.empty())
    {
        int s = q.front();
        q.pop();
        for(auto v : adj[s])
        {
            if(!used[v])
            {
                used[v] = true;
                q.push(v);
                pre[v] = s;
            }
            else if(v != pre[s]) return true;
        }
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
        memset(used, false, sizeof(used));
        memset(pre, 0, sizeof(pre));
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
        
        int ok = 0;
        for(int i = 1; i <= n; i++) 
        {
            if(!used[i]) 
            {
                if(BFS(i)) ok = 1;
            }
        }
        if(ok) cout << "YES";
        else cout << "NO";
        cout << endl;
    }   
}