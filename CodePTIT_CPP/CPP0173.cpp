#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll gcd(ll a,ll b)
{
	if(b == 0) return a;
	
	return gcd(b, a % b);
}
ll lcm(ll a, ll b)
{
	return (a / gcd(a, b)) * b;
}
main()
{
	int t; cin >> t;
	while(t--)
	{
		ll x, y , z, n;
		cin >> x >> y >> z >> n;
		ll res;
		res = lcm(x, y);
		res = lcm(res, z);

		ll a = pow(10, n - 1), b = pow(10, n) - 1;
		
		if(res > b) cout << -1;
		else if (a % res == 0) cout << a;
		else
		{
			ll t = a / res;
			ll tmp = res * (t + 1);
			
			if(tmp <= b) cout << tmp;
			else cout << -1;
		}

		cout << endl;	
	}
}