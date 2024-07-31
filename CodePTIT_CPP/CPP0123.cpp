#include<bits/stdc++.h>
#define ll long long 
using namespace std;

bool check(int n)
{
	if(n == 2) return true;
	for(int i = 2; i <= sqrt(n); i++)
	{
		if(n % i == 0) return false;
	}
	return n > 1;
}
main()
{	
		int n;
		cin >> n;
		if(check(n)) cout << "YES";
		else cout << "NO";
}