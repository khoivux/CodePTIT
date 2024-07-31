#include <bits/stdc++.h>
#define ll long long

using namespace std;

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t; cin >> t;
    while(t--)
    {
       int n; cin >> n;
       int a[n];
       int res = INT_MAX;
       for(int i = 0; i < n; i++)
       {
            cin >> a[i];
       }
       for(int i = 0; i < n - 1; i++)
       {
            for(int j = i + 1; j < n; j++)
            {
                int x = a[i] + a[j];
                if(abs(x) < abs(res)) res = x;
            }
       }
       cout << res << endl;
    }
}