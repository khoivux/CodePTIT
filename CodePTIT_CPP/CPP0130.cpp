#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int prime[1000000]={0};

void solve(ll n)
{
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0)
		{
			while(n % i == 0)
			{
				cout << i << " ";
				n /= i;
			}
		}
	}
	if(n > 1) cout << n;
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