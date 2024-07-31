#include <bits/stdc++.h>

using namespace std;
char am[] = {'a', 'e', 'i', 'o', 'u', 'y'};
bool check(char s)
{
	for(int i = 0; i < 6; i++)
	{
		if(s == am[i]) return false;
	}
	return true;
}
main()
{
	string s;
	getline(cin, s);
	for(int i = 0; i < s.length(); i++)
	{
		if(check(s[i]))
		{
			s[i] = tolower(s[i]);
			cout << "."<< s[i];
		} 
	}
}