#include <bits/stdc++.h>
#define ll long long

using namespace std;

main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		int a[n + 5], b[n - 1 + 5];
		int res;
		for(int i = 1; i <= n; i++) cin >> a[i];
		for(int j = 1; j <= n - 1; j++) cin >> b[j];

		int i = 1, j = 1;
		while(i <= n && j <= n - 1)
		{
			if(a[i] != b[j]) break;
			
			i++; j++;
		}

		if(i == n) cout << i;
		else if(a[i + 1] == b[j]) cout << i;
		else cout << j;
		cout << endl;
	}
}