#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll f[95];
void fibo()
{
	f[0] = 0;
	f[1] = 1;
	f[2] = 1;
	for(int i = 3; i < 93; i++)
	{
		f[i] = f[i - 1] + f[i - 2];
	}
}
bool check(int a)
{
	for(int i = 0; i < 93; i++)
	{
		if(a == f[i]) return true;
	}
	return false;
}

main()
{
	fibo();
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < n; i++)
		{
			if(check(a[i])) cout << a[i] << " ";
		}
		cout << endl;
	}
	
}