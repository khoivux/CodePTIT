#include <bits/stdc++.h>
using namespace std;
main()
{
	int t;
	cin >> t;
	cin.ignore();
	while(t--)
	{
		string s;
		getline(cin , s);
		vector <int> even, odd;
		stringstream ss(s);
		string tmp;
		while(ss >> tmp)
		{
			int a = stoi(tmp);
			if(a%2) odd.push_back(a);
			else even.push_back(a);
		}
		int le = odd.size();
		int chan = even.size();
		int n = le + chan;
		if((n % 2 == 0 && chan > le) || (n % 2 == 1 && le > chan))
		cout << "YES";
		else cout << "NO";
		cout << endl;
	}
}