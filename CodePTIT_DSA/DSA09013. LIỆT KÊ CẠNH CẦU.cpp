#include <bits/stdc++.h>
#define long long long
#define ii pair<int, int>
using namespace std;
int n, m;
vector<vector<int>> adj;
vector<pair<int, int>> edge;
bool used[1001];

void DFS(int u, int s, int t)
{
	used[u] = true;
	for(auto v : adj[u])
	{
		if((u == s && v == t) || (u == t && v == s))
			continue;
		if(!used[v])
		{
			used[v] = true;
			DFS(v, s, t);
		}
	}
}
int tplt(int s, int t)
{
	int res = 0;
	 for(int i = 1; i <= n; i++)
	 {
	 	if(!used[i])
	 	{
	 		res++;
	 		DFS(i, s, t);
	 	}
	 }
	 return res;
}
void CanhCau()
{
	int tmp = tplt(0, 0);
	for(auto e : edge)
	{
		int s = e.first, t = e.second;
		memset(used, false, sizeof(used));
		if(tplt(s, t) > tmp)
			cout << s << " " << t << " ";
	}
}
bool cmp(pair<int, int> a, pair<int, int> b)
{
	return a.first < b.first;
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
		adj.clear(); adj.resize(n + 1);
		edge.clear(); edge.resize(m + 1);
		memset(used, false, sizeof(used));

		for(int i = 0; i < m; i++)
		{
			int x, y; cin >> x >> y;
			adj[x].push_back(y);
			adj[y].push_back(x);
			edge.push_back({x, y});
		}
		for(int i = 1; i <= n; i++)
			sort(adj[i].begin(), adj[i].end());
		CanhCau();
		cout << endl;
	}

}