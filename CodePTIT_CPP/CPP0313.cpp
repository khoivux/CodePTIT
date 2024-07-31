#include <bits/stdc++.h>
using namespace std;
main()
{
	vector<string> res;
	string s;
	getline(cin , s);
	string a;
	getline(cin , a);
	stringstream ss(s);
	string tmp;
	while(ss >> tmp)
	{
		res.push_back(tmp);
	}
	for(string x : res)
	{
		if(x == a) continue;
		else cout << x << " ";
	}
}