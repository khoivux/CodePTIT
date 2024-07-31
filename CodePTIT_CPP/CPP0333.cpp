#include <bits/stdc++.h>
using namespace std;
main()
{
	string s;
	getline(cin , s);
	
	vector<string> v;
	stringstream ss(s);
	string tmp;
	while(ss >> tmp)
	{
		tmp[0] = toupper(tmp[0]);
		for(int i = 1; i < tmp.length(); i++) 
			tmp[i] = tolower(tmp[i]);
			
		v.push_back(tmp);
	}
	
	for(int i = 0; i < v.size() - 1; i++)
	{
		if(i == v.size() - 2)	
			cout << v[i] << ", ";
		else cout << v[i] <<" ";
	}	
	for(int i = 0; i < v[v.size() - 1].length(); i++)
		v[v.size() - 1][i] = toupper(v[v.size() - 1][i]);
	cout << v[v.size() - 1];
}