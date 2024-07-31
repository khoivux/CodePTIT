#include<bits/stdc++.h>
#define ll long long 
using namespace std;

void solve(int n)
{
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0)
		{
			int cnt = 0;
			while(n % i == 0)
			{
				n /= i;
				cnt++;
			}
			cout << i << " " << cnt;
			if(n > 1) cout << " ";
		}
	}
	if(n > 1) cout <<  n << " "<<1 << endl;
	else cout << endl;
}
main()
{	
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		solve(n);
	}
}