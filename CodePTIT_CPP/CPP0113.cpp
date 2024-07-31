#include<bits/stdc++.h>
#define ll long long 
using namespace std;

bool check(int n)
{
	int t = 0;
	int a = 2;
	while(a--)
	{
		t = t * 10 + n % 10;
		n /= 10;
	}
	if(t == 68) return true;
	else return false;
}
main()
{	
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		if(check(n)) cout << 1;
		else cout << 0;
		cout << endl;
	}
}