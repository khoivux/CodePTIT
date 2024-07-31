#include <iostream>
using namespace std;
main()
{
	int t;
	cin >> t;
	while(t--)
	{
		long long n;
		cin >> n;
		cout << (n + 1) * n / 2 << endl;
	}
}