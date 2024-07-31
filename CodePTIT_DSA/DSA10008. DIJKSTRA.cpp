#include <bits/stdc++.h>
#define long long long
#define ii pair<int, int>
using namespace std;
vector<vector<ii>> v;
int n, m;

void Djikstra(int s)
{
	vector<int> d(n + 1, 1e9);

	d[s] = 0;
	priority_queue<ii, vector<ii>, greater<ii>> q;
	q.push({s, 0});
	while(!q.empty())
	{
		ii t = q.top(); q.pop();
		int u = t.first, dis = t.second;
		if(dis > d[u]) continue;
		for(auto it : v[u])
		{
			int v = it.first, dist = it.second;
			if(d[v] > d[u] + dist)
			{
				d[v] = d[u] + dist;
				q.push({v, d[v]});
			}
		}
	}
	for(int i = 1; i <= n; i++) cout << d[i] << " ";
		cout << endl;
}
main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int t; cin >> t;
	while(t--)
	{
		int u;
		cin >> n >> m >> u;
		v.clear(); v.resize(n + 199);
		for(int i = 0;  i < m; i++)
		{
			int x, y, z;
			cin >> x >> y >> z;
			v[x].push_back({y, z});
			v[y].push_back({x, z});
		}
		Djikstra(u);
	}
}