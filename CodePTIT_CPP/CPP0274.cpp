#include <bits/stdc++.h>
using namespace std;
int cnt[1000001] = {0};
main()
{
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		int a[n];

		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
			cnt[a[i]]++;
		}
		int res = 0;
		for(int i = 0; i < n; i++)
		{
			if(cnt[a[i]] > 1)
			{
				res += cnt[a[i]];
				cnt[a[i]] = 0;
			}
			else cnt[a[i]] = 0;
		}
		cout << res << endl;
	}
}