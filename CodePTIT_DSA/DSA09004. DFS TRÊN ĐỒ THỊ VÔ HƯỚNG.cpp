#include <bits/stdc++.h>
#define long long long
#define ii pair<int, int>
using namespace std;

int n, m, u; 
bool used[1001];
void DFS(int u, vector<int> adj[])
{
     cout << u << " ";
     used[u] = true;
     for(auto v : adj[u])
     {
          if(!used[v]) DFS(v, adj);
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
          memset(used, false, sizeof(used));
          vector<int> adj[1001];
          cin >> n >> m >> u;
          for(int i = 1; i <= m; i++)
          {
               int x, y; cin >> x >> y;
               adj[x].push_back(y);
               adj[y].push_back(x);
          }
          for(int i = 1; i <= n; i++) 
               sort(adj[i].begin(), adj[i].end());
          
          DFS(u, adj);
          cout << endl;
     }
}