#include <bits/stdc++.h>
using namespace std;
int ok;
int n; 
int a[1000] = {0};
void generative(int a[], int n)
{
	int i = n - 1;
	while(i >= 0 && a[i] == 1)
	{
		a[i] = 0;
		i--;
	}
	if(i < 0) ok = 0;
	else a[i] = 1;		
}
main()
{
	int t; cin >> t;
	while(t--)
	{
		cin >> n;
		ok = 1;
		while(ok)
		{
			for(int j = 0; j < n; j++) cout << a[j];
			cout << " ";
			generative(a, n);
		}
		cout << endl;
	} 
}