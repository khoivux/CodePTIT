#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<ll> v(93, 0);

void fibo()
{
	v[1] = 1;
	v[2] = 1;
	for(int i = 3; i <= 92; i++)
	{
		v[i] = v[i - 1] + v[i - 2];
	}
}
main()
{
	int t; cin >> t;
	fibo();
	while(t--)
	{
		ll n; cin >> n;
		int ok = 0;
		for(int i = 0; i <= 92; i++)
		{
			if(n == v[i])
			{
				ok = 1;
				break;
			}
		}
		if(ok) cout << "YES";
		else cout << "NO";
		
		cout << endl;
	}
}