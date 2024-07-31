#include <bits/stdc++.h>
#define long long long
#define ii pair<int, int>
using namespace std;

int n, m;
vector<vector<int>> adj;
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t; cin >> t;
    while(t--) 
    {
        cin >> n >> m;
        adj.clear(); adj.resize(n + 1000);

        for(int i = 0; i < m; i++) 
        {
            int x, y; cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        int oddDeg = 0;
        for(int  i = 1; i <= n; i++) 
        {
            if(adj[i].size() % 2) oddDeg++;
        }
        if(oddDeg == 0) cout << 2;
        else if(oddDeg == 2) cout << 1;
        else cout << 0;
        cout << endl;
    }
}