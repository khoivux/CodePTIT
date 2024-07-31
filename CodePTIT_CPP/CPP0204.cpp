#include <bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0 ) return false;
	}
	return n > 1;
}
main()
{
	int t; cin >> t;
	while(t--)
	{
		int l, r; cin >> l >> r;
		int cnt = 0;
		for(int i = l; i <= r; i++)
		{
			if(isPrime(i)) cnt++;
		}
		cout << cnt << endl;
	}
}