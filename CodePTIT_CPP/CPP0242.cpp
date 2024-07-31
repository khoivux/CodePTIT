#include <bits/stdc++.h>
#define ll long long
using namespace std;
main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int a1[n], a2[n];
		for(int i = 0; i < n; i++) cin >> a1[i];
		for(int i = 0; i < n; i++) cin >> a2[i];
		int res = -1;
		for(int i = 0; i < n; i++)
		{
			int sum1 = 0, sum2 = 0;
			for(int j = i; j < n; j++)
			{
				sum1 += a1[j];
				sum2 += a2[j];
				if(sum1 == sum2)
				{
					int cnt = j - i + 1;
					res = max(res, cnt);
				}
			}
		}
		cout << res << endl;
	}
}