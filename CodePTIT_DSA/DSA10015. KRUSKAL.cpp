#include <bits/stdc++.h>
#define long long long
#define ii pair<int, int>
using namespace std;
int n, m;
struct edge
{
	int dau, cuoi, ts;
};
int parent[1001];
vector<edge> ds;

void init()
{
	for(int i = 1; i <= n; i++)
	{
		parent[i] = i;
	}
}

int Find(int u)
{
	if(parent[u] == u) return u;
	else return Find(parent[u]);
}

bool Union(int u, int v)
{
	u = Find(u);
	v = Find(v);
	if(u == v) return false;
	if(u < v) parent[v] = u;
	else parent[u] = v;
	return true;
}

bool cmp(edge a, edge b)
{
	return a.ts < b.ts;
}

void Kruskal()
{
	sort(ds.begin(), ds.end(), cmp);
	vector<edge> caykhung;
	long res = 0;
	for(int i = 0; i < m; i++)
	{
		if(caykhung.size() == n - 1) break;
		if(Union(ds[i].dau, ds[i].cuoi))
		{
			caykhung.push_back(ds[i]);
			res += ds[i].ts;
		}
	}
	cout << res << endl;
}
main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int t; cin >> t;
	while(t--)
	{
		ds.clear();
		memset(parent, 0, sizeof(parent));
		cin >> n >> m;
		for(int i = 0; i < m; i++)
		{
			int x, y, z; cin >> x >> y >> z;
			ds.push_back({x, y, z});
		}
		init();/////////////////////////
		Kruskal();
	}
}