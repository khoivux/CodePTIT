#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll f[100];
void fibo()
{
	f[1] = 1;
	f[2] = 1;
	for(int i = 3; i <= 92; i++)
	{
		f[i] = f[i - 1] + f[i - 2];
	}
}

int main()
{
    int t;
    cin >> t;
    fibo();
    while(t--)
    {
    	int n;
    	cin >> n;
    	cout << f[n] << endl;
	}
}