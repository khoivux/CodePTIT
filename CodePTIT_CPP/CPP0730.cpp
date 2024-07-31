#include <bits/stdc++.h>
using namespace std;
using ll = long long;
main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int a[n];
		ll sum = 0;
		ll res = -1e9;
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
			sum += a[i];
		 	res = max(res, sum);
			if(sum < 0) sum = 0;
			
		}
		cout << res << endl;
	}
}