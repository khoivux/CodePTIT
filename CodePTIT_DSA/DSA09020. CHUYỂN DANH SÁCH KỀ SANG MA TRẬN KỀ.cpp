#include <bits/stdc++.h>
#define long long long
#define ii pair<int, int>
using namespace std;

main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int n; cin >> n;
	int a[n + 1][n + 1];
	memset(a, 0, sizeof(a));
	cin.ignore();
	for(int i = 1; i <= n; i++)
	{
		string s; getline(cin, s);
		stringstream ss(s);
		int x;
		while(ss >> x)
		{
			a[x][i] = 1;
			a[i][x] = 1;
		}
	}
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}