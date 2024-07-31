#include<bits/stdc++.h>
#define ll long long 
using namespace std;
int prime[1000000]={0};

main()
{	
	int t;
	cin >> t;
	while(t--)
	{
		vector <int> v;
		
		int n, k;
		cin >> n >> k;
		for(int i = 2; i <= sqrt(n); i++)
		{
			if(n % i == 0)
			{
				while(n % i == 0)
				{
					v.push_back(i);
					n /= i;
				}
			}
		}
		if(n > 1) v.push_back(n);
		if(k > v.size()) cout << "-1";
		else cout << v[k - 1];
		cout << endl;
	}
}