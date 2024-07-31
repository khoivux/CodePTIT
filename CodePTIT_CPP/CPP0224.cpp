#include <bits/stdc++.h>
using namespace std;

int dx[8] = {-1, -1, 0, 1, 1, 1, 0, -1};
int dy[8] = {0, 1, 1, 1, 0, -1, -1, -1};
int n, m;
int a[109][109];
void solve(int i, int j)
{
	a[i][j] = 0;
	for(int k = 0; k < 8; k++)
	{
		int i2 = i + dx[k];
		int j2 = j + dy[k];
		if(i2 < n && i2 >= 0 && j2 < m && j2 >= 0 && a[i2][j2] == 1)
			solve(i2, j2);
	}
}
main()
{
	int t; cin >> t;
	while(t--)
	{
		cin >> n >> m;

		for(int i = 0; i < n; i++)
			for(int j = 0; j < m; j++) cin >> a[i][j];
		int cnt = 0;
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < m; j++)
			{
				if(a[i][j] == 1)
				{
					cnt++;
					solve(i, j);
				} 
			}
		}
		cout << cnt << endl;
	}
}