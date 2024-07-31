#include <bits/stdc++.h>
using namespace std;
main()
{
	int n, k, b;
	cin >> n >> k >> b;
	int a[n + 5] = {0};
	while(b--)
	{
		// Den hong = 1
		int t; cin >> t;
		a[t] = 1;
	}
	int cnt = 0;
	for(int i = 1; i <= k; i++)
		cnt += a[i];

	int res = cnt;
	for(int i = k + 1; i <= n; i++)
	{
		cnt = cnt + a[i] - a[i - k];
		res = min(res, cnt);
	}
	cout << res;
}