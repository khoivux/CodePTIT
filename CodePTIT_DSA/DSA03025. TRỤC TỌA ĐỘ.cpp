#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;
struct point
{
	int x, y;
};
bool cmp(point a, point b)
{
	return a.y < b.y;
}
main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		point a[n];
		for(int i = 0; i < n; i++)
		{
			cin >> a[i].x >> a[i].y;
		}
		sort(a, a + n, cmp);
		int preY = -1;
		int res = 0;
		for(int i = 0; i < n; i++)
		{
			if(a[i].x >= preY)
			{
				res++;
				preY = a[i].y;
			}
		}
		cout << res << endl;
	}
}