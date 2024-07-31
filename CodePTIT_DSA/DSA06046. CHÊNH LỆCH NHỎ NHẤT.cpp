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
      for(int i = 0; i < n; i++) cin >> a[i];
      sort(a, a + n);
      int res = INT_MAX;
      for(int i = 1; i < n; i++)
      {
         res = min(res, a[i] - a[i - 1]);
      }
      cout << res << endl;
    }   
}