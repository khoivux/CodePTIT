#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a[100][100] = {0};
int n, k;
int cnt;

void Try(int i, int j, int sum)
{
	if(sum == k && i == n && j == n) 
	{
		cnt++;
		return;
	}
	if(i + 1 <= n)
	{
		Try(i + 1, j, sum + a[i + 1][j]);
	}
	if(j + 1 <= n)
	{
		Try(i, j + 1, sum + a[i][j + 1]);
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
		cnt = 0;
		cin >> n >> k;
		for(int i = 1; i <= n; i++)
		{
			for(int j = 1; j <= n; j++)
			{
				cin >> a[i][j];
			}
		}

		Try(1, 1, a[1][1]);
		cout << cnt << endl;
	}
}