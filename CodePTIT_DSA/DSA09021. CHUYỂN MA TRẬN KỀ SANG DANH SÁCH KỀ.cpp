#include <bits/stdc++.h>
#define long long long
#define ii pair<int, int>
using namespace std;

main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int n; cin >> n;
	int a[n + 1][n + 1];
	vector<vector<int>> adj;
	adj.resize(n + 1);
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			cin >> a[i][j];
			if(a[i][j] && i < j)
			{
				adj[i].push_back(j);
				adj[j].push_back(i);
			}
		}
	}
	for(int i = 1; i <= n; i++)
	{
		sort(adj[i].begin(), adj[i].end());
		for(auto v : adj[i])
		{
			cout << v << " ";
		}
		cout << endl;
	}

}