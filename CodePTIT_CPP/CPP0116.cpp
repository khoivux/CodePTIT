#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n)
{
	if(n < 2) return false;
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0) return false;
	}
	return true;
}
main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		for(int i = 1; i <= n; i++)
		{
			if(isPrime(i)) 
			{
				cout << i << " ";
				continue;
			}
			else if(i % 2 == 0) cout << 2 << " ";
			else
			{
				for(int j = 2; j <= sqrt(i); j++)
				{
					if(i % j == 0)
					{
						cout << j << " ";
						break;
					}
				}
			}
		}
		cout << endl;
	}
}