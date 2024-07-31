#include <bits/stdc++.h>
#define long long long
#define ii pair<int, int>
using namespace std;

int n;
int res = 0;
vector<vector<int>> adj;
bool used[100001];
void DFS(int u, int cnt)
{
    res = max(res, cnt);
    used[u] = true;
    for(int v : adj[u])
    {
        if(!used[v])
        {  
            DFS(v, cnt + 1);
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
        res = 0;
        memset(used, false, sizeof(used));
        cin >> n;
        adj.clear(); adj.resize(n + 100);
        for(int i = 0; i <= n -2; i++)
        {
            int x, y; cin >> x >> y;
            adj[x].push_back(y);
        }
        DFS(1, 0);
        cout << res << endl;
    }
}