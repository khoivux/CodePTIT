#include<bits/stdc++.h>
using namespace std;

long long giaithua(int i)
{
	long long gt = 1;
	long long x = 1;
	while(x<=i)
	{
	    gt = gt *x;
    	x++;
	}
	
	return gt;
}
main()
{
	 	long long n;
	 	cin >> n;
	 	long long i = 1;
	 	long long s = 0;
	 	while(i<=n)
	 	{
	 	    long long x = giaithua(i);
	 	    s = s + x;
	 	    i++;
	 	}
	 
		cout << s ;
}