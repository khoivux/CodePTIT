#include <bits/stdc++.h>
#define ll long long

using namespace std;

bool used[10000];
vector<vector<int>> adj;
int parent[10000];
int n, m, s, t;

void DFS(int u)
{
    used[u] = true;

    for(auto v : adj[u])
    {
        if(!used[v])
        {   
        	used[v] = true;
            parent[v] = u;
            DFS(v);
        }
    } 
}
main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

  	int test; cin >> test; 
  	while(test--)
  	{
  		 cin >> n >> m;
	    cin >> s >> t;
	    adj.clear(); adj.resize(n + 1);
    	memset(used, false, sizeof(used));
    	
	    for(int i = 1; i <= m; i++)
	    {
	        int x, y;
	        cin >> x >> y;
	        adj[x].push_back(y);
	    }
	    for(int i = 1; i <= n; i++)
	    {
	        sort(adj[i].begin(), adj[i].end());
	    }
	    DFS(s);
	    if(used[t])
	    {
	        vector<int> v;
	        while(t != s)
	        {
	            v.push_back(t);
	            t = parent[t];
	        }
	        v.push_back(t);
	        reverse(v.begin(), v.end());
	        for(auto x : v) cout << x << " ";
	    }
	    else 
	    {
	    	cout << -1;
	    }
	    cout << endl;
  	}
}