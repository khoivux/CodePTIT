#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b)
{
		if(b == 0) return a;
		else return gcd(b, a % b);
}
bool isPrime(int n)
{
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0) return false;
	}
	return n > 1;
}
int solve(int x)
{
	int cnt = 0;
	for(int i = 1; i <= x; i++)
	{
		if(gcd(i, x) == 1) cnt++;
	}
	if(isPrime(cnt)) return 1;
	else return 0;
}
main()
{
	int t; cin >> t;
	while(t--)
	{
		int x; cin >> x;
		cout << solve(x) << endl;
	}
}