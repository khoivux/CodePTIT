#include <bits/stdc++.h>
using namespace std;
main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int cnt = n;
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		
		int l = 0, r = cnt - 1;
		while(l <= r && cnt > 0)
		{
			if(a[l] == a[r])
			{
				l++;
				r--;
			}
			else if(a[l] < a[r])
			{
				a[l + 1] += a[l];
				l++; cnt--;
			}
			else
			{
				a[r - 1] += a[r];
				r--;
				cnt--;
			}
		}
		cout << n - cnt << endl;
	}
}