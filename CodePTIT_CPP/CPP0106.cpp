#include<bits/stdc++.h>
using namespace std;

bool check(string s)
{
	int l = 0, r = s.length() - 1;
	while(l < r)
	{
		if(s[l] != s[r]) return false;
		else{
			l++; r--;
		}
	}
	return true;
}
main()
{
	int t;
	cin >> t;
	while(t--)
	{
		cin.ignore();
		string s;
		cin >> s;
		if(check(s)) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
}