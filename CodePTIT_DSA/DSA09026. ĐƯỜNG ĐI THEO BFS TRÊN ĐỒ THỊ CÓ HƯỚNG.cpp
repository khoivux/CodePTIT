#include <bits/stdc++.h>
#define long long long
#define ii pair<int, int>
using namespace std;
int n, m, u, v;
vector<vector<int>> adj;
bool used[1000];
int pre[1000];

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
                pre[x] = s;
                q.push(x);
            }    
        }
    }
}
void showPath() 
{
    vector<int> path;
    path.push_back(v);
    int tmp = v;
    while(pre[tmp] != u) 
    {
        tmp = pre[tmp];
       path.push_back(tmp);
    }
    path.push_back(u);
    reverse(path.begin(),path.end());
    for(auto it : path)
    {
       cout << it << " ";
    }
    cout << endl;
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    int t; cin >> t;
    while(t--) 
    {
        cin >> n >> m >> u >> v;
        memset(used, false, sizeof(used));
        memset(pre, 0, sizeof(pre));
        adj.clear(); adj.resize(n + 1);

        for(int i = 0; i < m; i++) {
            int x, y; cin >> x >> y;
            adj[x].push_back(y);
        }
        for(int i = 1; i <= n; i++)
        {
            sort(adj[i].begin(), adj[i].end());
        }
        BFS();
        if(used[v]) showPath();
        else cout << -1; 
        cout << endl;
    }   
}