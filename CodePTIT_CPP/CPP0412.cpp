#include <bits/stdc++.h>

using namespace std;

main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		vector <int> v(n);
		for(int i = 0; i < n; i++) cin >> v[i];
		sort(v.begin(), v.end());
		for(auto i : v) cout << i << " ";
		cout << endl;
	}
}