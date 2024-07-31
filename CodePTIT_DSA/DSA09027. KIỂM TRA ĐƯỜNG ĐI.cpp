#include <bits/stdc++.h>
#define long long long
#define ii pair<int, int>
using namespace std;
int n, m, u, v;
vector<vector<int>> adj;
bool used[1000];

void BFS()
{
    queue<int> q;
    q.push(u);
    used[u] = true;
    while(!q.empty()) 
    {
        int s = q.front();
        q.pop();
        for(auto x : adj[s]) 
        {
            if(!used[x])
            {   
                used[x] = true;
                q.push(x);
            }    
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
        adj.clear(); adj.resize(n + 1);
        for(int i = 0; i < m; i++) {
            int x, y; cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        for(int i = 1; i <= n; i++)
        {
            sort(adj[i].begin(), adj[i].end());
        }
        int q; cin >> q;
        while(q--) 
        {
            cin >> u >> v;
            memset(used, false, sizeof(used));
            BFS();
            if(used[v]) cout << "YES";
            else cout << "NO"; 
            cout << endl;
        }     
    }   
}