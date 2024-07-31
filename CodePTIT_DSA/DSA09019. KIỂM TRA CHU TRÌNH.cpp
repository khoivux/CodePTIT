#include <bits/stdc++.h>
#define long long long
#define ii pair<int, int>
using namespace std;
int n, m;
vector<vector<int>> adj;
int parent[1001];
bool used[1001];
int ok = 0;
bool DFS(int u)
{
	used[u] = true;
	for(auto v : adj[u])
	{
		if(!used[v])
		{
			parent[v] = u;
			used[v] = true;
			if(DFS(v)) return true;
		}
		else if(v != parent[u])
		{
			return true;
		}
	}
	return false;
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
		ok = 0;
		memset(used, false, sizeof(used));
		memset(parent, 0, sizeof(parent));

		adj.clear(); adj.resize(n + 1000);
		for(int i = 0; i < m; i++)
		{
			int x, y; cin >> x >> y;
			adj[x].push_back(y); 
			adj[y].push_back(x);
		}
		for(int i = 1; i <= n; i++)
		{
			memset(used, false, sizeof(used));
			if(DFS(i)) ok = 1;
			if(ok) break;
		}
		if(ok) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
}