#include <bits/stdc++.h>
using namespace std;
main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int a[n][n], row[n] = {0}, col[n] = {0};
		int Max = -1;
		int check = 0;
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < n; j++)
			{
				cin >> a[i][j];
				row[i] += a[i][j];
			}
			Max = max(row[i], Max);
		}
		for(int j = 0; j < n; j++)
		{
			for(int i = 0; i < n; i++)
			{
				col[j] += a[i][j];
			}
			if(col[j] > Max)
			{
				Max = col[j];
				check = 1;
			}
		}
		int res = 0;
		if(check)
		{
			for(int i = 0; i < n; i++)
			{
				res += Max - col[i];
			}
		}
		else
		{
			for(int i = 0; i < n; i++)
			{
				res += Max - row[i];
			}
		}
		cout << res << endl;
	}
}