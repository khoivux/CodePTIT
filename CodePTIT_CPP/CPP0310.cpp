#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll bigNum(string s)
{
	for(int i = 0; i < s.length(); i++)
	{
		if(s[i] - '0' == 5) s[i] = '6';
	}
	return stoll(s);
}

ll smallNum(string s)
{
	for(int i = 0; i < s.length(); i++)
	{
		if(s[i] - '0' == 6) s[i] = '5';
	}
	return stoll(s); 
}

main()
{
	int t; cin >> t;

	while(t--)
	{
		string s; 
		string s1, s2;		
		cin >> s1 >> s2;
		
		cout << smallNum(s1) + smallNum(s2);
		cout << " ";
		cout << bigNum(s1) + bigNum(s2);
		cout << endl;
	}
}