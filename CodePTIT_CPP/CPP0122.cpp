#include<bits/stdc++.h>
#define ll long long 
using namespace std;

ll gcd(ll a, ll b)
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
	int t;
	cin >> t;
	while(t--)
	{
		ll n;
		ll res = 1;
		cin >> n;
		for(ll i = 2; i <= n; i++)
		{
			res = lcm(res, i);
		}
		cout << res << endl;
	}
}