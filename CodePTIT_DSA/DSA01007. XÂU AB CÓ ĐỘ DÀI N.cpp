#include <bits/stdc++.h>
#define ll long long

using namespace std;
int n;
int x[10000];

bool isFinal()
{
	for(int i = 1; i <= n; i++)
	{
		if(x[i] == 0)
			return false;
	}
	return true;
}

void display()
{
	for(int i = 1; i <= n; i++)
	{
		if(x[i]) cout << 'B';
		else cout << 'A';
	}
	cout << " ";
}

void nextGen()
{
	int i = n;
	while(i >= 1 && x[i] == 1)
	{
		x[i] = 0;
		i--;
	}
	if(i >= 1) x[i] = 1;
}

main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int t; cin >> t;
	while(t--)
	{
		cin >> n;
		for(int i = 1; i <= n; i++) x[i] = 0;
		while(!isFinal())
		{
			display();
			nextGen();
		}
		display();
		cout << endl;
	}
}