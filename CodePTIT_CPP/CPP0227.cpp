#include <bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int a[n + 3][n + 3];
		for(int i = 1; i <= n; i++)
			for(int j = 1; j <= n; j++)
				cin >> a[i][j];
				
		while(i <= n)
		{
			if(i % 2 == 1)
			{
			 for (int j = 1; j <= n; ++j)
                cout << a[i][j] << " ";
			}
			else
			{
			for (int j = n; j > 0; --j)
                cout << a[i][j] << " ";
			}
			i++;
		}
		cout << endl;
	}
}