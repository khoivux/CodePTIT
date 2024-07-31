#include <bits/stdc++.h>
using namespace std;
main(){
	int t; cin >> t;
	while(t--)
	{
		int n; cin >> n;
		long long a[n];
		int cnt = 0;
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
			if(a[i]) cout << a[i] << " ";
			else cnt++;
		}
		if(cnt)
		{
			for(int i = 0; i < cnt; i++) cout << "0 ";
		}
		cout << endl;
	}
}