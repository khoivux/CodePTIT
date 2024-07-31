#include <bits/stdc++.h>
using namespace std;
// Lay so du cua a cho m
long long mod(string s, long long m)
{
	long long res = 0;
	for(int i = 0; i < s.length(); i++)
	{
		res = (res* 10 + s[i] - '0') % m;
	}
	return res;
}
//  a^b % m = mod ^ b % m
long long modPow(long long a,long long b, long long m)
{
	if(b == 0) return 1;
	if(b == 1) return a % m;
	long long t = modPow(a, b / 2, m);
	if(b % 2 == 0) return t * t % m;
	else return (t * t % m) * a % m;
}

main()
{
	int t; cin >> t;
	while(t--)
	{
		string a;
		long long m, b;
		cin >> a >> b >> m;
		long long tmp = mod(a, m);
		cout << modPow(tmp, b, m) << endl;
	}
}