#include <bits/stdc++.h>
using namespace std;

bool check(int n)
{
	int dem = 0;
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0)
		{	dem++;
			int cnt = 0;
			while(n % i == 0)
			{
				cnt++;
				n /= i;
			}
			if(cnt > 1) return false;
		}
	}
	if(n != 1) dem++;
	if(dem != 3) return false;

	return true;
}
main()
{
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		if(check(n)) cout << 1;
		else cout << 0;
		cout << endl;
	}
}