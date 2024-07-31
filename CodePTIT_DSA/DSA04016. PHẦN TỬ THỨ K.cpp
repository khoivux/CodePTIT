#include <bits/stdc++.h>
#define ll long long

using namespace std;

main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int t; cin >> t;
	while(t--)
	{
		int n, m, k; cin >> n >> m >> k;
		int a[n], b[m], c[n + m];
		int res;
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int j = 0; j < m; j++) cin >> b[j];
		sort(a, a + n);
		sort(b, b + m);
		int i = 0, j = 0, l = 0;
		while(i < n && j < m)
		{
			if(a[i] < b[j]) 
				c[l++] = a[i++];
			else 
				c[l++] = b[j++];

			if(l == k) 
			{
				res = c[l - 1];
				break;
			}
		}
		while(i < n)
		{
			c[l++] = a[i++];
			if(l == k) 
			{
				res = c[l - 1];
				break;
			}
		}
		while(j < m)
		{
			c[l++] = b[j++];
			if(l == k) 
			{
				res = c[l - 1];
				break;
			}
		}
		cout << res << endl;
	}
}