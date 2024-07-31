#include <bits/stdc++.h>
using namespace std;
main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int a[n];
		int cnt[n] = {1};
		for(int i = 0; i < n; i++) cin >> a[i];
		int res = -1;
		for(int i = 0; i < n; i++)
		{
			for(int j = 0; j < i; j++)
			{
				if(a[j] < a[i]) 
				{
				  cnt[i] = max(cnt[i], cnt[j] + 1);
				  res = max(cnt[i], res);
				}
			}
		}
		cout<< res << endl;
	}
}