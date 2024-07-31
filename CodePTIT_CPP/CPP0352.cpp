#include <bits/stdc++.h>
using namespace std;
map <string , int> mp;

main()
{
	int n; cin >> n;
	cin.ignore();	
	while(n--)
	{
		string s;
		getline(cin, s);
		for(int i = 0; i < s.length(); i++) s[i] = tolower(s[i]);
		vector <string> v;
		stringstream ss(s);
		string tmp;
		while(ss >> tmp)
		{
			v.push_back(tmp);	
		} 
		string res = v[v.size() - 1];
		for(int i = 0; i < v.size() - 1; i++)
		{
			res += v[i][0];
		}
		mp[res]++;
		if(mp[res] == 1)
		cout << res;
		else 
		cout << res << mp[res];
		
		cout <<"@ptit.edu.vn" << endl;
	}
}