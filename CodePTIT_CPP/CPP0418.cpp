#include <bits/stdc++.h>
using namespace std;
main()
{
	int t; cin >>t;
	while(t--)
	{
		set <int> sa;
		set <int> sb;
		set <int> hop;
		int n, m; cin >> n >> m;
		for(int i = 0; i < n; i++)
		{
			int x; cin >> x;
			sa.insert(x);
			hop.insert(x);
		}
		for(int i = 0; i < m; i++)
		{
			int x; cin >> x;
			sb.insert(x);
			hop.insert(x);
		}
		for(auto i : hop) cout << i << " ";
		cout << endl;
		for(auto i : sa)
		{
			if(sb.count(i) != 0) cout << i << " ";
		}
		cout << endl;
	}
}