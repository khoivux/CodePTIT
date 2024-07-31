#include <bits/stdc++.h>
using namespace std;
bool isPrime(long long n)
{
	for(long long i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0) return false;
	}
	return n > 1;
}
main()
{
	int t; cin >> t;
	while(t--)
	{
		int cnt = 0;
		long long n; cin >> n;
		for(long long i = 2; i <= sqrt(n); i++)
		{
			if(isPrime(i)) cnt++;
		}
		cout << cnt << endl;
	}
}