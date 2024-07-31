#include <bits/stdc++.h>
using namespace std;
bool check(vector <string> v, string s)
{
	for(auto x : v)
	{
		if(x == s) return false;
	}
	return true;
}
main()
{
	int t; cin >> t;
	cin.ignore();
	while(t--)
	{
		string s1;
		string s2;
		getline(cin, s1);
		getline(cin, s2);
		vector <string> v;
		vector <string> res;
		stringstream ss(s2);
		string tmp1;
		while(ss >> tmp1)
		{
			v.push_back(tmp1);
		}
		stringstream ss1(s1);
		string tmp2;
		while(ss1 >> tmp2)
		{
			if(check(v, tmp2))
			{
				res.push_back(tmp2);
				v.push_back(tmp2);
			} 
		}
		sort(res.begin(), res.end());
		for(auto x : res)
		{
			cout << x << " ";
		}
		cout << endl;
	}
}