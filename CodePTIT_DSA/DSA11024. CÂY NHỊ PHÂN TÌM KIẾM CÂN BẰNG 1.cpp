#include <bits/stdc++.h>
#define long long long
#define ii pair<int, int>
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
		int a[n + 1];
		for(int i = 0; i < n; i++)
			cin >> a[i];

		sort(a, a + n);
		if(n % 2 == 0) cout << a[n / 2 - 1];
		else cout << a[n / 2];
		cout << endl;
	}	
}