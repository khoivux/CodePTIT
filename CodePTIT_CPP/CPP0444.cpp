#include <bits/stdc++.h>
using namespace std;

int search(int a[], int n, int k)
{
	int l = 1, r = n;
	while(l <= r)
	{
		int m = (l + r) / 2;
		if(a[m] == k) return m;
		else if(k < a[m]) r = m - 1;
		else l = m + 1;
	}
	return -1;
}
main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		int x;
		cin >> n >> x;
		int a[n + 5];

		for(int i = 1; i <= n; i++) 
		{
			cin >> a[i];
		}
		int res = -1;
		for(int i = 1; i <= n; i++)
		{
			if(a[i] == x) res = i;		
		}
		cout << res << endl;
	}
}