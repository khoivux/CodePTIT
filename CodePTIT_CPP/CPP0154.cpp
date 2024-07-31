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
		if((n + 1) * n / 2 == k) cout << 1;
		else cout << 0;
		cout << endl;
	}
}