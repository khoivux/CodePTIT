#include <bits/stdc++.h>
using namespace std;
using ll = long long;

main()
{
	int t; cin >> t;
	while(t--)
	{
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		sort(a, a + n);
		cout << a[k - 1] << endl;
	}
}