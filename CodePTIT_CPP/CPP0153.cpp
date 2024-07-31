#include <bits/stdc++.h>

using namespace std;
main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long n;
		long long k;
		cin >> n >> k;
		cout << k * (k - 1) / 2 * (n / k) + ((n % k) * (n % k + 1) / 2) << endl;
	}
}