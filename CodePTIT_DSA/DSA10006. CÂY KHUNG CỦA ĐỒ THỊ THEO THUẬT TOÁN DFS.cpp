#include <bits/stdc++.h>
#define long long long
#define ii pair<int, int>
using namespace std;
int n, m, s;
vector<vector<int>> adj;
vector<ii> res;
bool used[1001];

void DFS(int u)
{
	used[u] = true;
	for(auto v : adj[u])
	{
		if(!used[v])
		{
			res.push_back({u, v});
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
		memset(used, false, sizeof(used));
		cin >> n >> m >> s;
		res.clear();
		adj.clear(); adj.resize(1000 + n);
		for(int i = 0; i < m; i++)
		{
			int x, y; cin >> x >> y;
			adj[x].push_back(y);
			adj[y].push_back(x);
		}
		DFS(s);
		if(res.size() != n - 1) cout << -1 << endl;
		else 
		{
			for(auto it : res)
			{
				cout << it.first << " " << it.second << endl;
			}
		}
	}
}