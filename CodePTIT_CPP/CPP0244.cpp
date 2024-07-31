#include <bits/stdc++.h>
using namespace std; 
main()
{
	int n;
	cin >> n;
	int a[n + 2] = {0};
	for(int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	sort(a, a + n);
	for(int i = 0; i < n; i++)
	{
		if(a[i] == a[i+1]) continue;
		else cout << a[i] << " ";
	}
}