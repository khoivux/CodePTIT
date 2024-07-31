#include <bits/stdc++.h>
#define long long long
#define ii pair<int, int>
using namespace std;
int n, m;
vector<vector<int>> adj;
bool used[1001];
vector<int> res;
void DFS(int s)
{
    used[s] = true;
    for(auto x : adj[s])
    {
        if(!used[x])
        {
            used[x] = true;
            DFS(x);
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
            DFS(i);
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
        res.clear();

        for(int i = 0; i < m; i++) {
            int x, y; cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        for(int i = 1; i <= n; i++)
        {
            sort(adj[i].begin(), adj[i].end());
        }
        int tmp = count();
        for(int i = 1; i <= n; i++) 
        {
            memset(used, false, sizeof(used));
            used[i] = true;
            if(count() > tmp) res.push_back(i);
        }
        for(auto x : res) cout << x << " ";
            cout << endl;
    }   
}