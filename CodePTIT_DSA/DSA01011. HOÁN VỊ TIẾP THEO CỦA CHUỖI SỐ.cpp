#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n;
string s; 

void nextGen()
{
	n = s.length();
	int i = n - 2;
	while(i >= 0 && s[i] >= s[i + 1])
	{
		i--;
	}
	if(i >= 0)
	{
		int j = n - 1;
		while(s[j] <= s[i])
		{
			j--;
		}
		swap(s[i], s[j]);
		int l = i + 1, r = n - 1;
		while(l <= r)
		{
			swap(s[l], s[r]);
			l++; r--;
		}
		cout << s;
	}
	else cout << "BIGGEST";
	cout << endl;
}

main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);

	int t; cin >> t;
	while(t--)
	{
		int test; cin >> test;
		cin >> s;
		cout << test << " ";
		nextGen();
	}
}