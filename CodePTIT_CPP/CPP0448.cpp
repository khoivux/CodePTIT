#include <bits/stdc++.h>
using namespace std;

main()
{
	int t; cin >> t;
	while(t--)
	{
		vector <int> v(1e6 + 1, 0);
		int n, x; cin >> n >> x;
		int a[n];
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
			v[a[i]]++;
		}
		if(v[x]) cout << v[x];
		else cout << -1;
		cout << endl;
	}
}