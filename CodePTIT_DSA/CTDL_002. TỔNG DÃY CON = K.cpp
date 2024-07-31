#include <bits/stdc++.h>
#define ll long long

using namespace std;
int n, cnt = 0;
ll k;
int x[10000] = {0};
int a[10000];
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
	ll sum = 0;
	for(int i = 1; i <= n; i++)
	{
		sum += x[i] * a[i];
	}
	if(sum == k) return true;
	else return false;
}
void display()
{
	for(int i = 1; i <= n; i++)
	{
		if(x[i])
			cout << a[i] << " ";
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
	
	cin >> n >> k;
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i];
	}
	while(!isFinal())
	{
		if(isTrue())
		{	
			cnt++;
			display();
		}
		nextGen();
	}
	if(isTrue())
	{
		cnt++;
		display();
	}
	cout << cnt;
}