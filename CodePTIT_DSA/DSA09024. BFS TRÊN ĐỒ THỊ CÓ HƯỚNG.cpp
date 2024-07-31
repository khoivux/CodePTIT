#include <bits/stdc++.h>
#define long long long
#define ii pair<int, int>
using namespace std;
int n, m;
vector<vector<int>> adj;
bool used[1001];
void BFS(int u)
{
	queue<int> q;
	q.push(u);
	used[u] = true;        
	while(!q.empty())
	{
		int s = q.front(); q.pop();
		cout << s << " ";
		for(auto v : adj[s])
		{
			if(!used[v])
			{
				used[v] = true;
				q.push(v);
			}
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
		for(int i = 1; i <= n; i++)
		{
			sort(adj[i].begin(), adj[i].end());
		}
		BFS(u);
		cout << endl;
	}	
}