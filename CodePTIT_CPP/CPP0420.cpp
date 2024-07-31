#include <bits/stdc++.h>
using namespace std;
int n, X;
struct num
{
	int id;
	int data;
};

bool cmp(num a, num b)
{
	int t1 = abs(a.data - X);
	int t2 = abs(b.data - X);
	if(t1 < t2) return 1;
	if(t1 == t2 && a.id < b.id) return 1;
	return 0;
}
main()
{
	int t; cin >> t;
	while(t--)
	{

		cin >> n >> X;
		num a[n];
		for(int i = 0; i < n; i++) 
		{
			cin >> a[i].data;
			a[i].id = i;
		}
		sort(a, a + n, cmp);
		for(int i = 0; i < n; i++) cout << a[i].data << " ";
		cout << endl;
	}
}