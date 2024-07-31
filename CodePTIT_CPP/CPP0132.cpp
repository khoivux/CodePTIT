#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int prime[1000000]={0};

void solve(ll n)
{
	ll res = 0;
	for(ll i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0)
		{ 	
			res = max(i, res);
			while(n % i == 0)
			{
				n /= i;
			}
		}
	}
	if(n > 1) res = max(n, res);
	cout << res;
	cout << endl;
}

main()
{	
	int t;
	cin >> t;
	while(t--)
	{
		ll n;
		cin >> n;
		solve(n);
	}
}