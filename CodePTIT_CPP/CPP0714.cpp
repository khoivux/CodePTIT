#include <bits/stdc++.h>
#define ll long long

using namespace std;
int a[1000] = {0};
int n, k;
void result()
{
	for(int i = 1; i <= n; i++) cout << a[i] << " ";
		cout << endl;
}

void nextGen()
{
	int i = n - 1;
	while(i >= 1 && a[i] < a[i + 1])
	{
		i--;
	}
	int j = n;
	swap(a[i], a[j]);
	int l = i + 1, r = n;
	while(l <= r)
	{
		swap(a[l], a[r]);
		l++; r--;
	}
}
main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	int t; cin >> t;
	while(t--)
	{
		cin >>n;
		for(int i = 1; i <=n;i++) cin >> a[i];
			nextGen();
		result();
	}
}