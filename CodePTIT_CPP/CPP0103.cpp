#include<bits/stdc++.h>
using namespace std;
main()
{
	 	double res = 0;
	 	double n;
	 	cin >> n;
	 	for(int i = 1; i <= n; i++)
	 	{
	 		res += 	1.0 * 1 / i;
		}
		cout << setprecision(4) << fixed << res ;
}