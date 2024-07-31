#include <bits/stdc++.h>
using namespace std;
vector <int> v(1e4 + 2, 0);
void eratosthenes()
{
	v[1] = 1;
	for(int i = 2; i <= 100; i++)
	{
		if(!v[i])
		{
			for(int j = i; j <= 1e4; j += i)
			{
				if(!v[j]) v[j] = i;
			}
		}
	}
	for(int i = 2; i <= 1e4; i++)
	{
		if(!v[i]) v[i] = i;
	}
}

main()
{
	int t; cin >> t;
	while(t--)
	{
		eratosthenes();
		int n; cin >> n;
		for(int i = 1; i <= n; i++)
		{
			cout << v[i] << " ";
		}
		cout << endl;
	}
}