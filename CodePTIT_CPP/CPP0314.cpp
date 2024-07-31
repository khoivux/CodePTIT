#include <bits/stdc++.h>
using namespace std;
main()
{
	set <string> res;
	int n;
	cin >> n;
	cin.ignore();
	while(n--)
	{
		string s;
		getline(cin ,s);
		res.insert(s);
	}
	cout << res.size();
}