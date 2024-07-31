#include <bits/stdc++.h>
#define long long long
#define ii pair<int, int>
using namespace std;
int n, m;
vector<vector<int>> adj1, adj2;
bool used[1001];

void DFS(int s, vector<vector<int>> adj)
{
    used[s] = true;
    for(auto x : adj[s])
    {
        if(!used[x])
        {
            used[x] = true;
            DFS(x, adj);
        }
    }
}

int count(vector<vector<int>> adj) 
{
    memset(used, false, sizeof(used));
    int res = 0;
    for(int i = 1; i <= n; i++)
    {
        if(!used[i])
        {
            DFS(i, adj);
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
        adj1.clear(); adj1.resize(n + 1000);
        adj2.clear(); adj2.resize(n + 1000);
        for(int i = 0; i < m; i++) {
            int x, y; cin >> x >> y;
            adj1[x].push_back(y);
            adj1[y].push_back(x);

            adj2[x].push_back(y);
        }
        for(int i = 1; i <= n; i++)
        {
            sort(adj1[i].begin(), adj1[i].end());
            sort(adj2[i].begin(), adj2[i].end());
        }
        if(count(adj1) == 1 && count(adj2) == 1)
            cout << "YES";
        else cout << "NO";
        cout << endl;
    }   
}