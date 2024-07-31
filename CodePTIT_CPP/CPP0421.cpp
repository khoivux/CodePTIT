#include <bits/stdc++.h>

using namespace std;

main()
{
	int t; cin >> t;

	while(t--)
	{
		int n; cin >> n;
		long long a[n];
		set <long long> se;
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
			if(a[i] < n && a[i] >= 0) se.insert(a[i]);
		} 

		for(int i = 0; i < n; i++)
		{
			if(se.count(i)) cout << i << " ";
			else cout << -1 << " ";
		}
		cout << endl;
	}
}