#include <bits/stdc++.h>
using namespace std;

bool search(int a[], int n, int k)
{
	int l = 0, r = n - 1;
	while(l <= r)
	{
		int m = (l + r)/2;
		if(a[m] == k) return true;
		else if(k < a[m])
			r = m - 1;
		else 
			l = m + 1;
	}
	return false;
}
main()
{
	int t; cin >> t;
	while(t--)
	{
		int n, k;
		cin >> n >> k;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		if(search(a, n, k)) cout << 1;
		else cout << -1;
		cout << endl;
	}
}