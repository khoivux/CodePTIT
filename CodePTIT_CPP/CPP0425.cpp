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
		int mid;
		if(n % 2 == 0) mid = n / 2;
		else mid = n / 2 + 1;
		mid++;
		int id = 1;
		for(int i = 1; i <= n; i++)
		{
			if(i % 2) cout << a[id++] << " ";
			else cout << a[mid++] << " ";
		}
		cout << end
	}
}