#include <bits/stdc++.h>
using namespace std;
main()
{
	int t; cin >> t;
	while(t--)
	{
		int m, n; 
		cin >> m >> n;
		int a, b;
		cin >> a >> b;

		int cnt = 0;
		for(int i = m; i <= n; i++)
		{
			if(i % a == 0 || i % b == 0) cnt++;
		}
		cout << cnt << endl;
	}
}