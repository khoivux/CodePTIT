#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool check(ll a[], set <ll> s, int n)
{
	for(int i = 0; i < n; i++)
	{
		for(int j = i + 1; j < n; j++)
		{
			ll t = a[i] + a[j];
			if(s.count(t) != 0) return true;
		}
	}
	return false;
}
main()
{
	int t; cin >> t;
	while(t--)
	{	
		int n, k;
		ll a[100000];
		set<ll> s;
		cin >> n >> k;
		for(int i = 0; i < n; i++) 
		{
			cin >> a[i];
			a[i] = a[i] * a[i];
			s.insert(a[i]);
		}
		if(check(a, s, n)) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
}