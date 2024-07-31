#include <bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n, m;
		cin >> n >> m;
		int a[n][m];
		multimap <int, int> mp;
		for(int i = 1; i <= n; i++)
		{
			for(int j = 1; j <= m; j++)
			{
				cin >> a[i][j];
				if(a[i][j] == 1)
					mp.insert({i,j});
			}			
		}
		for(auto it : mp)
		{
			for(int i = 1; i <= m; i++)
				a[it.first][i] = 1;
			for(int i = 1; i <= n; i++)
				a[i][it.second] = 1;
		}
		
		for(int i = 1; i <= n; i++)
		{
			for(int j = 1; j <= m; j++)
				cout << a[i][j] << " ";
			cout << endl;
		}
		cout << endl;
	}
}