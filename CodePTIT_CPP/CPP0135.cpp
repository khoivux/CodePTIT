#include<bits/stdc++.h>
#define ll long long 
using namespace std;
bool isPrime(int n)
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
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
		for(int i = 2; i <= sqrt(n); i++)
		{
			if(isPrime(i)) cout << i * i << " ";
		}
		cout << endl;
	}
}