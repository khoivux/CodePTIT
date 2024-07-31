#include <bits/stdc++.h>
#define long long long
#define ii pair<int, int>
using namespace std;

int n, m; 

main()
{
     ios_base::sync_with_stdio(false);
     cin.tie(nullptr);
     cout.tie(nullptr);
     
     int t; cin >> t;
     while(t--)
     {
          vector<int> adj[1001];
          cin >> n >> m;
          for(int i = 1; i <= m; i++)
          {
               int x, y; cin >> x >> y;
               adj[x].push_back(y);
          }
          for(int i = 1; i <= n; i++)
          {
               sort(adj[i].begin(), adj[i].end());
               cout << i << ": ";
               for(auto u : adj[i])
               {
                    cout << u << " ";
               }
               cout << endl;
          }
     }
}