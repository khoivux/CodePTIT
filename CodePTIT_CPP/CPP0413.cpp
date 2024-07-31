#include <bits/stdc++.h>

using namespace std;

main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		vector <int> v(n);
		for(int i = 0; i < n; i++) cin >> v[i];
		sort(v.begin(), v.end());
		int l = 0, r = n - 1;
		while(l <= r)
		{
			if(l == r)
				cout << v[r];
			else
				cout << v[r] << " " << v[l] << " ";
				
			r--;
			l++; 
		}
		cout << endl;
	}
}