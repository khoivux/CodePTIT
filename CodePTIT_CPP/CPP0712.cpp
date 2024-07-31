#include <bits/stdc++.h>
#define ll long long

using namespace std;
int a[1000] = {0};
int n, k;
void result()
{
	for(int i = 1; i <= k; i++) cout << a[i];
		cout << " ";
}

void Try(int i)
{
	for(int j = a[i - 1] + 1; j <= n - k + i; j++)
	{
		a[i] = j;
		if(i == k) 
			result();
		else
			Try(i + 1);
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
		cin >> n >> k;
		for(int i = 1; i <= k; i++) a[i] = i;
		Try(1);
		cout << endl;
	}
}