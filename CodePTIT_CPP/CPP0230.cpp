#include <bits/stdc++.h>
using namespace std;
main()
{
		int n;
		cin >> n;
		int a[n + 3][5];
				
		
		int res = 0;
		for(int i = 1; i <= n; i++)
		{
			int t = 0;
			for(int j = 1; j <= 3; j++)
			{
				cin >> a[i][j];
				t += a[i][j];
			}
			if(t > 3/2) res++;
		}
		cout << res;		
}