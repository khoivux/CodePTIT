#include <bits/stdc++.h>
#define endl '\n'
using namespace std;


int main()
{
    int t;
    cin >> t;
    while (t--)
    {
    	int n; cin >> n;
    	int a[n];
    	int ok = -2;
    	int sum = 0;
    	for(int i = 0; i < n; i++) 
		{
			cin >> a[i];
			sum += a[i];
		}
		
		int sum1 = 0;
    	for(int i = 0; i < n; i++)
    	{
    		
    		if(sum1*2 == sum - a[i])
    		{
    			ok = i;
    			
    			break;
			}
			sum1 += a[i];
		}
		cout << ok + 1<< endl;
	}
}