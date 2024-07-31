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
		ll a[n + 3];
		ll tmp = 0;
		for(int i = 1; i <= n; i++) 
			cin >> a[i];
		for(int i = 1; i <= k; i++)
			tmp += a[i];
	
		int id = k;
		ll res = tmp;
		for(int i = k + 1; i <= n; i++)
		{
			tmp = tmp + a[i] - a[i - k];
			if(tmp > res)
			{
				res = tmp;
				id = i;
			}			
		}
		for(int i = id - k + 1; i <= id; i++) 
			cout << a[i] << " ";
		cout << endl;
	}
}