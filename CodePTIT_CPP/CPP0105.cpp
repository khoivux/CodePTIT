#include<bits/stdc++.h>
using namespace std;

bool check(string s)
{
	for(int i = 0; i < s.length(); i++)
	{
		int tmp = s[i] - '0';
		if(tmp != 0 && tmp != 6 && tmp != 8) return false;
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