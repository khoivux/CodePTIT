#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool cmp(string a, string b)
{
	return a + b > b + a;
}
main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n; 
		ll a[n];
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		cout << a[0] * a[1] << " ";
		for(int i = 1; i < n - 1; i++)
		{
			cout << a[i - 1] * a[i + 1] << " ";
		}
		cout << a[n - 2] * a[n - 1] << endl;
	}
}