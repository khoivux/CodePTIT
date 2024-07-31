#include <bits/stdc++.h>
#define long long long
#define ii pair<int, int>
using namespace std;
int n, m;
vector<vector<int>> adj;
bool used[1001];
void DFS(int u)
{
	used[u] = true;
	cout << u << " ";
	for(auto v : adj[u])
	{
		if(!used[v])
		{
			used[v] = true;
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
		int u; cin >> n >> m >> u;
		adj.clear(); adj.resize(n + 1);
		memset(used, false, sizeof(used));
		for(int i = 0; i < m; i++)
		{
			int x, y; cin >> x >> y;
			adj[x].push_back(y);
		}
		DFS(u);
		cout << endl;
	}	
}