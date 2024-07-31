#include <bits/stdc++.h>
using namespace std;

string a[] = {"", "", "ABC", "DEF", "GHI", "JKL", "MNO", "PQRS", "TUV", "WXYZ"};

bool check(string s)
{
	string tmp = s;
	reverse(tmp.begin(), tmp.end());
	return tmp == s;
}

main()
{
	int t; cin >> t;
	cin.ignore();
	while(t--)
	{
		string s;
		getline(cin, s);
		
		string res = "";
		
		for(int i = 0; i < s.length(); i++)
		{
			s[i] = toupper(s[i]);
			for(int j = 2; j < 10; j++)
			{
				for(int k = 0; k < a[j].size(); k++)
				{
					if(a[j][k] == s[i]) 
					res =res + char(j + '0') ;	
				}
			}
		}
		if(check(res)) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
}