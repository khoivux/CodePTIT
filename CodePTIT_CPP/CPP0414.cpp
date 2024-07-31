#include <bits/stdc++.h>

using namespace std;

main()
{
	int t; cin >> t;
	cin.ignore();
	while(t--)
	{
		int n; cin >> n;
		cin.ignore();
		map <char, bool> mp;
		string s;
		getline(cin , s);
		stringstream ss(s);
		string tmp;
		while(ss >> tmp)
		{
			for(int i = 0; i < tmp.length(); i++)
			{
				mp[tmp[i]]++;
			}
		}
		for(auto it : mp)
		{
			if(it.second != 0) 
			{
				cout << it.first << " ";
				it.second = 0;
			}
		}
		
		cout << endl;
	}
}