#include <bits/stdc++.h>
using namespace std;

bool check(string s)
{
	int n = s.length();
	int l = 0, r = n - 1;
	while(l <= r)
	{
		int t = s[l] - '0';
		if(s[l] != s[r]) return false;
		if(t % 2) return false;
		l++;
		r--;
	}
	return true;
}

main()
{
	int n;
	cin >> n;
	cin.ignore();
	while(n--)
	{
		string s;
		getline(cin ,s);
		if(check(s)) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
}