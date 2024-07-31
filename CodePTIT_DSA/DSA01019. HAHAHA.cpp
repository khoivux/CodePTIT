#include <bits/stdc++.h>
#define ll long long

using namespace std;
int n;
int x[10000] = {0};
// A - 0 
// H - 1
bool isFinal()
{
	for(int i = 1; i <= n; i++)
	{
		if(x[i] == 0)
			return false;
	}
	return true;
}

bool isTrue()
{
	if(x[1] == 0) return false;
	if(x[n] == 1) return false;
	for(int i = 2; i <= n; i++)
	{
		if(x[i] == 1 && x[i - 1] == 1) return false;
	}
	return true;
}

void display()
{
	for(int i = 1; i <= n; i++)
	{
		if(x[i]) cout << 'H';
		else cout << 'A';
	}
	cout << endl;
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
			if(isTrue())
				display();
			nextGen();
		}
		if(isTrue())
			display();
	}
}