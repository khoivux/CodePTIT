#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n; 
string s;
bool isFinal()
{
	for(int i = 0; i < n; i++)
	{
		if(s[i] == '0') return false;
	}
	return true;
}
void nextGen()
{
	int i = n - 1;
	while(i >= 0 && s[i] == '1')
	{
		s[i] = '0';
		i--;
	}
	if(i >= 0) s[i] = '1';
}
main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int t; cin >> t;
	while(t--)
	{
		cin >> s;
		n = s.length();
		if(isFinal())
		{
			for(int i = 1; i <= n + 1; i++)
				cout << 0;
		}
		else 
		{
			nextGen();
			cout << s;
		}
		cout << endl;
	}
}