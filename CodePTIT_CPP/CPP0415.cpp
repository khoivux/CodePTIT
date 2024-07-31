#include <bits/stdc++.h>

using namespace std;

main()
{
	int t; cin >> t;

	while(t--)
	{
		long long n, m;
		cin >> n >> m;
		long long a[n], b[m];
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < m; i++) cin >> b[i];
		sort(a, a + n);
		sort(b, b + n);
		cout << a[n - 1] * b[0] << endl;
	}
}