#include <bits/stdc++.h>
using namespace std;
main()
{
	int t; cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int cnt[100001];
		int a[n];
		for(int i = 1; i <= 100001; i++) cnt[i] = 0;
		for(int i = 0; i < n; i++) 
		{
			cin >> a[i]; cnt[a[i]]++;
		}
		sort(a, a + n);
		int res = 0;

		for(int i = a[0]; i <= a[n - 1]; i++)
		{
			if(cnt[i] == 0) res++;
		}
		cout << res << endl;
	}
}