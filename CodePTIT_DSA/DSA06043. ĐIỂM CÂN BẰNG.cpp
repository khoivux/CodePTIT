#include <bits/stdc++.h>
#define ll long long

using namespace std;

main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 
    ll t; cin >> t;
    while(t--)
    {
       int n; cin >> n;
       int a[n + 1];
       int ok = 0;
       ll l[n + 2], r[n + 2];
       l[0] = 0; r[n + 1] = 0;
       for(int i = 1; i <= n; i++)
       {
            cin >> a[i];
            l[i] = a[i] + l[i - 1];
       }
       for(int i = n; i >= 1; i--)
       {
            r[i] = a[i] + r[i + 1];
       }
       for(int i = 1; i <= n; i++)
       {
            if(l[i] == r[i])
            {
                cout << i;
                ok = 1;
            }
            if(ok) break;
       }
       if(!ok) cout << -1;
       cout << endl;
    }   
}