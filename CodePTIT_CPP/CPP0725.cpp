#include <bits/stdc++.h>
using namespace std;
int mod = 1e9 + 7;
long long a[1001][1001];

long long solve(int n, int k)
{
	if(k > n - k) k = n - k;
	if(a[n][k]) return a[n][k];
	
	if(n == k || k == 0) a[n][k] = 1;
	else if(k == 1) a[n][k] = n;
	else a[n][k] = solve(n - 1, k - 1) + solve(n - 1, k);
	
	a[n][k] %= mod; 
	return a[n][k];
}
main()
{
	int t; cin >> t;
	while(t--)
	{
		int n, k; cin >> n >> k;
		cout << solve(n, k);
		cout << endl;
	}
}