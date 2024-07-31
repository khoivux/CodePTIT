#include <bits/stdc++.h>
#define ll long long

using namespace std;

int n, k;
int x[100];
int a[100][100];
vector<string> v;

bool isFinal()
{
    for(int i = n - 1; i >= 1; i--)
    {
        if(x[i] < x[i + 1]) return false;
    }
    return true;
}

void solve()
{
    int s = 0;
    string str = "";
    for(int j = 1; j <= n; j++)
    {
    	s += a[j][x[j]];
    	str = str + to_string(x[j]) + " ";
    }
    if(s == k) v.push_back(str);
}

void nextGen()
{
    int i = n - 1;
    while(i >= 1 && x[i] > x[i + 1])
    {
        i--;
    }
    int j = n;
    while(x[i] > x[j]) j--;
    swap(x[i], x[j]);
    int l = i + 1, r = n;
    while(l <= r)
    {
        swap(x[l], x[r]);
        l++;
        r--;
    }
}
main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);
	cout.tie(nullptr);
	
	cin >> n >> k;
	for(int i = 1; i <= n; i++)
	{
		x[i] = i;
		for(int j = 1; j <= n; j++)
		{
			cin >> a[i][j];
		}
	}
	solve();
	while(!isFinal())
	{
		nextGen();
		solve();
	}
	cout << v.size() << endl;
	for(auto x : v) cout << x << endl;
}