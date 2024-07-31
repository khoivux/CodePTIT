#include <bits/stdc++.h>
using namespace std;

main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n,q;
		cin >> n >> q;
		int a[n + 5] = {0};
		for(int i = 1; i <= n; i++)
		{
			cin >> a[i];
			a[i] += a[i - 1];
		}
		for(int i = 1; i <= q; i++)
		{
			int l, r;
			cin >> l >> r;
			cout << a[r] - a[l - 1] << endl;
		}
	}
}