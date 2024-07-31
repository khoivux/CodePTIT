#include <bits/stdc++.h>
#define ll long long

using namespace std;

main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int n, m;
	cin >> n;
	int a[n + 1][n + 1];
	
	for(int i = 1; i <= n; i++)
		{
			for(int j = 1; j <= n; j++)
			{
				cin >> a[i][j];
			}
		}	
	cin >>m;
	int b[m + 1][m + 1];
	for(int i = 1; i <= m; i++)
	{
		for(int j = 1; j <= m; j++)
		{
			cin >> b[i][j];
		}
	}
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			int x = i, y = j;
			if(x > m)
			{
				if(x % m == 0) x = m;
				else x = x % m;
			}
			if(y > m)
			{
				if(y % m == 0) y = m;
				else y = y % m;
			}
			cout << a[i][j] * b[x][y] <<" ";
		}
		cout <<endl;
	}
}