#include<bits/stdc++.h>
using namespace std;

bool check(int n)
{
	int c = 0;
	int l = 0;
	while(n)
	{
		int t = n % 10;
		if(n % 2) l++;
		else c++;
		
		n /= 10;
	}
	if(l == c) return true;
	else return false;
}

main()
{
	int n;
	cin >> n;
	int a = pow(10, n - 1);
	int b = pow(10, n) - 1;
	int cnt = 0;
	for(int i = a; i <= b; i++)
	{
		if(check(i))
		{
			cout << i;
			cnt++;
		}
		if(cnt == 10) 
		{
			cout << endl;
			cnt =0;
		}
		else cout << " ";
	}
}