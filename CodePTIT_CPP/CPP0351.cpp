#include <bits/stdc++.h>
using namespace std;
void solve1(vector <string> v)
{
	int n = v.size();
	cout << v[n - 1] << " ";
	for(int i = 0; i < n - 1; i++)
	{
		cout << v[i] << " ";
	}
}
void solve2(vector <string> v)
{
	int n = v.size();
	for(int i = 1; i < n; i++)
	{
		cout << v[i] << " ";
	}
	cout << v[0];
}
main()
{
	int t; cin >> t; 
	while(t--)
	{
		int selec;
		cin >> selec;
		cin.ignore();
		string s; getline(cin, s);
		vector <string> v;
		stringstream ss(s);
		string tmp;
		while(ss >> tmp)
		{
			v.push_back(tmp);
		}
		for(int i = 0; i < v.size(); i++)
		{
			v[i][0] = toupper(v[i][0]);
			for(int j = 1; j < v[i].length(); j++)
			{
				v[i][j] =tolower(v[i][j]);
			}
		}
		if(selec == 1) solve1(v);
		else solve2(v);
		cout << endl;
	}
}