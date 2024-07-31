#include <bits/stdc++.h>
using namespace std;
main()
{
	int t; cin >> t;
	while(t--)
	{
		int n, k; 
		cin >> n >> k;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		
		sort(a, a + n);
		int id = n - 1;
		while(k--)
		{
			cout << a[id--] << " ";
		}
		cout << endl;
	}
}