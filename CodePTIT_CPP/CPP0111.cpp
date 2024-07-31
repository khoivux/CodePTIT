#include<bits/stdc++.h>
#define ll long long 
using namespace std;
bool check(int a[], int cnt)
{
	for(int i = 0; i < cnt - 1; i++)
	{
		if(abs(a[i] - a[i + 1]) == 1) continue;
		else return false;
	}
	return true;
}
main()
{	
	int t;
	cin >> t;
	while(t--)
	{
		ll n;
		cin >> n;
		int a[100];
		int cnt = 0;
		while(n)
		{
			a[cnt++] = n % 10;
			n/= 10;
		}
		if(check(a, cnt)) cout << "YES";
		else cout << "NO";
		cout << endl;
	}
}