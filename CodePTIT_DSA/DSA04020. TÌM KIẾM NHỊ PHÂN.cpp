#include <bits/stdc++.h>
#define ll long long

using namespace std;

int binarySearch(int a[], int n, int k)
{
	int l = 0, r = n - 1;
	while(l <= r)
	{
		int mid = (l + r) / 2;
		if(a[mid] == k) return mid;

		if(a[mid] <= k)
			l = mid + 1;
		else 
			r = mid - 1;
	}
	return -1;
}

main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int t; cin >> t;
	while(t--)
	{
		int n, k; cin >> n >> k;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		int x = binarySearch(a, n, k);
		if(x > 0) cout << x + 1;
		else cout << "NO";
		cout << endl;
	}
}