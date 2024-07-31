#include <bits/stdc++.h>
#define ll long long
#define ii pair<int, int>
using namespace std;

main()
{
     ios_base::sync_with_stdio(false);
     cin.tie(nullptr);
     cout.tie(nullptr);
 
     int n; cin >> n;
     ll a[n];
     for(int i = 0; i < n; i++)
     {
          cin >> a[i];
     }  
     sort(a, a + n);
     ll res;
     res = max(
     {
          a[0] * a[1] * a[n - 1],
          a[n - 3] * a[n - 2] * a[n - 1],
          a[0] * a[1],
          a[n - 2] * a[n - 1]
     });
     cout << res;
}