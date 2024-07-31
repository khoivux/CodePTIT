#include <bits/stdc++.h>
using namespace std;

bool  check(int a[], int l, int r)
{
	while(l <= r && a[l] <= a[l + 1])
		 l++;
	l++;
	while(l <= r && a[l] <= a[l - 1]) 
		l++;
//	cout << l << " " << r ;
	if(l > r) return true;
	else return false;
}
main()
{
	int t; cin >> t;
	while(t--)
	{
		int n, l, r;
		cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		cin >> l >> r; 
//		check(a, l,r);
		if(check(a, l, r)) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
}