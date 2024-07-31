#include <bits/stdc++.h>
#define long long long
#define ii pair<int, int>
using namespace std;
int n;
vector<vector<int>> adj;
bool used[1001];
void DFS(int u)
{
    used[u] = true;
    for(auto v : adj[u])
    {
        if(!used[v])
        {
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
        int n; cin >> n;
        memset(used, false, 1001);
        adj.clear(); adj.resize(n + 1000);
        for(int i = 1; i < n; i++)
        {
            int x, y; cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        DFS(1);
        int ok = 1;
        for(int i = 1; i <= n; i++)
        {
            if(!used[i])
            {
                ok = 0;
                break;
            }
        }
        if(ok) cout << "YES";
        else cout << "NO";
        cout << endl;
    }   
}