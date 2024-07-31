#include <bits/stdc++.h>
using namespace std;
main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int a[n];
		for(int i = 1; i <= n; i++) cin >> a[i];
		sort(a + 1, a + n + 1);
		int l = 1, r = n;
		while(l <= r)
		{
			if(l == r) cout << a[l++] << " ";
			else 
			{
				cout << a[r--] << " " << a[l++] << " ";
			}
		}
		cout << endl;
	}
}