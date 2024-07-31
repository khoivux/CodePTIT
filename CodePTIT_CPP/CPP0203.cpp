#include <bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin >> t;
	while(t--)
	{
		//so can tim <=n;
		int n;
		cin >> n;
		int ok = 0;
		vector<int> v(n + 1, 0);
		int a[n] = {0};
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
			if(a[i] >= 1 && a[i] <= n)
			{
			 	v[a[i]] = 1;	
			}
		}
		for(int i = 1; i <= n; i++)
		{
			if(!v[i])
			{
				cout << i;
				ok = 1;
				break;
			}
		}
		if(ok == 0) cout << n + 1;
		cout << endl;
	}
}