#include<bits/stdc++.h>
using namespace std;

main()
{	
	int t;
	cin >> t;
	while(t--)
	{
		cin.ignore();
		string s;
		cin >> s;
		int i = 0;
		while(i < s.length())
		{
			if(s[i] - '0'== 0 && s[i + 1] - '0' == 8 && s[i + 2] - '0' == 4)
			{
				i += 3;
			}
			else
			{
				cout << s[i];
				i++;
			}
		}
		cout << endl;
	}
}