#include <bits/stdc++.h>
#define ll long long

using namespace std;
int n;
int x[10000] = {0};

bool isFinal()
{
	for(int i = 1; i <= n; i++)
	{
		if(x[i] == 0)
			return false;
	}
	return true;
}
bool isReversed()
{
	int l = 1, r = n;
	while(l <= r)
	{
		if(x[l] != x[r])
			return false;
		l++;
		r--;
	}
	return true;
}
void display()
{
	for(int i = 1; i <= n; i++)
	{
		cout << x[i] << " ";
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
	
	cin >> n;
	while(!isFinal())
	{
		if(isReversed())
		{
			display();
		}
		nextGen();
	}
	display();
}