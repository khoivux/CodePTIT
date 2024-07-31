#include <bits/stdc++.h>
using namespace std;

main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int a, m;
		cin >> a >> m;
		int ok = 0;
		for(int i = 0; i <= m - 1; i++)
		{
			if((i * a) % m == 1)
			{
				ok = 1;
				cout << i;
				break;
			}
		}
		if(ok == 0) cout << "-1";
		cout << endl;
	}
}