#include <bits/stdc++.h>
using namespace std;
//Sliding Window
main()
{
	int t; cin >> t;
	while(t--)
	{
		int n, k; cin >> n >> k;
		int a[n];
		int cnt = 0;
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
			if(a[i] <= k) cnt++;
		}
		
		int cntTmp = 0;	
		for(int i = 0; i < cnt; i++)
			if(a[i] <= k) cntTmp++;
			
		int cntMax = cntTmp;
		for(int i = cnt; i < n; i++)
		{
			if(a[i - cnt] <= k) cntTmp--;
			if(a[i] <= k) cntTmp++;
			
			cntMax = max(cntMax, cntTmp);
	
		}
		cout << cnt - cntMax << endl;	
	}
}