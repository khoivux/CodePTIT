#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n, k;
int x[10000];

void init()
{
	for(int i = 1; i <= k; i++)
	{
		x[i] = i;
	}
}

bool isFinal()
{
	for(int i = 1; i <= k; i++)
	{
		if(x[i] != n - k + i) return false;
	}
	return true;
}

void display()
{
	for(int i = 1; i <= k; i++)
	{
		cout << x[i];
	}
	cout << " ";
}

void nextGen()
{
	int i = k; 
	while(i >= 1 && x[i] == n - k + i)
	{
		i--;
	}
	if(i >= 1)
	{
		x[i]++;
		for(int j = i + 1; j <= k; j++)
		{
			x[j] = x[j - 1] + 1;
		}
	}
}
main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	int t;
	cin >> t;
	while(t--)
	{
		cin >> n >> k;
		init();
		while(!isFinal())
		{
			display();
			nextGen();
		}
		display();
		cout << endl;
	}
}
