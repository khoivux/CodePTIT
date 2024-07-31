#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t; cin >> t;
	while(t--)
	{
		int n;
		cin >> n; 
		int a[n];
		for(int i = 0; i < n; i++) cin >> a[i];
		int res = 1e9;
		int abres = 1e9;
		for(int i = 0; i < n; i++)
		{
			for(int j = i + 1; j < n; j++)
			{
				int tmp = abs(a[i] + a[j]);
		
				if(tmp < abres)
				{
					res = a[i] + a[j];
					abres = tmp;
				 } 
			}
		}
		cout << res << endl;
	}
}