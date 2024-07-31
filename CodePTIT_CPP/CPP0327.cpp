#include <bits/stdc++.h>
using namespace std; 

int mu(int n)
{
	if(n == 0) return 1;
	int a = 1;
	while(n--)
	{
		a *= 2;
		a %= 10;
	}
	return a;
}

main()
{
	int t;
	cin >> t;
	while(t--)
	{
		string s;
		cin >> s;
		int l = 0, r = s.length() - 1;
		
		while(l <= r)
		{
			char x = s[l];
			s[l] = s[r];
			s[r] = x;
			l++;
			r--;
		}
		int res = 0;
		for(int i = 0; i < s.length(); i++)
		{
			int t = s[i] - '0';
			if(t)
			{
				res += mu(i);

				res %= 10;
			}
		}
		if(res == 0 || res ==5) cout << 1;
		else cout << 0;
		cout << endl;
	}
}